#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int ac, char **av)
{
	int fd, i, len = 0;
	const char *filename;
	char *c, *s;

	s = "\n";
	filename = "TRECE";
	/*char *buf;*/

	if (ac != 6)
	{
		printf("No corresponde el número de argumentos");
		return (0);
	}

	fd = open(filename, O_CREAT | O_APPEND | O_RDWR, 0600);

	for (i = 1; i < 6; i++)
	{
		while ((av[i])[len] != 0)
			len++;

		c = av[i];
		write(fd, c, len);
		write(fd, s, 1);
		len = 0;
	}
	close(fd);
	return (0);
}
