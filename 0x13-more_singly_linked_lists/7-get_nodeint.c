#include "lists.h"

/**
 *
 * get_nodeint_at_index - Function return to nth of the node
 *
 * @head: THis is my structure
 *
 * @index: This is my index
 *
 *  Return: This is the return
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int i = 0;

	while (head != NULL)
		if (i <= index)
		{
			if (i == index)
			{
				if (i == index)
				{
					cursor =  head;
					break;
			}
			head = head->next;
			i++;
		}
		else
			return (NULL);
}
return (cursor);
}

