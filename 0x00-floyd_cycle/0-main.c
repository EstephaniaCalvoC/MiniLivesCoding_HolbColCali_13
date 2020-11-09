#include "list.h"

/**
 * add_int - Add new node at start of the list.
 * @head: Pointer to pointer head of the list.
 * @num: Integer number of the new node.
 * Return: A pointer to new node.
 */
teamf *add_int(teamf **head, int num)
{
	/* Allocate in memory */
	teamf *new = malloc(sizeof(teamf));

	/* Create node */
	new->data = num;
	new->next = *head;
	*head = new;
}

/**
 * main - Test idetify_loops function.
 * Return: 0 is succes.
 */
int main(void)
{
	teamf *head = NULL;

	add_int(&head, 67);
	add_int(&head, 89);
	add_int(&head, 25);
	add_int(&head, 5);

	/* Create a loop*/
	head->next->next->next->next = head;

	if (identify_loops(head))
		printf("Hay un loop\n");
	else
		printf("No hay un loop\n");
	return (0);
}
