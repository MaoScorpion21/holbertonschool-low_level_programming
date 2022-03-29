#include "lists.h"

/**
 * print_list - prints all the elements
 *              of a "list_t" list.
 * @head: pointer to the start of the list.
 * Return: number of nodes in the list.
 */

size_t print_list(const list_t *head)
{
size_t nodes = 0;
while (head != NULL)
{
if (head->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", head->len, head->str);
nodes++;
head = head->next;
}
return (nodes);
}
