#include "lists.h"
#include <stdlib.h>


/**
 *free_listint -function that frees
 *
 *@head: header file
 *
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;
	
while (head)
{	ptr = head;
	head = head->next;
	free(head);
}
}
