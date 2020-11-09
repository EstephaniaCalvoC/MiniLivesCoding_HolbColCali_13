#include "list.h"

/**
 * identify_loops - Detect a loop in a linked list.
 * @head: Head of the list.
 * Return: 1 if there is a loop, on the contrary 0.
 */
int identify_loops(teamf *head)
{
	teamf *slow = head;
	teamf *fast = head;

	for (; slow && fast && fast->next;)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}
