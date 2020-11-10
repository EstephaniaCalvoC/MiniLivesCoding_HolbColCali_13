#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main- takes a file and prints it content
 * @ac: number of arguments
 * @ag: passed arguments
 * Return: 0
 */
int main(int ac, char *ag[])
{
	int fd, rdbytes = 1;
	char buf[100];

	fd = open(ag[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error\n");
		return (0);
	}

	while (rdbytes > 0)
	{
		rdbytes = read(fd, buf, 100);
		write(1, buf, rdbytes);
	}
	close(fd);
	return (0);
}
