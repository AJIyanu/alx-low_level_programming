#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - this prints everything in a list
 * @h: address of head
 *
 * Return: the number of list printed
 */


size_t print_list(const list_t *h)
{
	int count = 0;
	int *ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return count;
}
