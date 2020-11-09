#ifndef LIST
#define LIST

#include <stdio.h>
#include <stdlib.h>

/**
 * struct teamf - List of integers.
 * @data: Integer number.
 * @next: Next node.
 */
typedef struct teamf
{
	int data;
	struct teamf *next;
} teamf;

int identify_loops(teamf *head);

#endif /* List */
