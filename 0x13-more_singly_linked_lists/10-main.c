#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodes - Add nodes to the list.
 * @head: A pointer to a pointer to the head of the list.
 */
void add_nodes(listint_t **head)
{
add_nodeint_end(head, 0);
add_nodeint_end(head, 1);
add_nodeint_end(head, 2);
add_nodeint_end(head, 3);
add_nodeint_end(head, 4);
add_nodeint_end(head, 98);
add_nodeint_end(head, 402);
add_nodeint_end(head, 1024);
}
/**
 * delete_nodes - Delete nodes from the list.
 * @head: A pointer to a pointer to the head of the list.
 */
void delete_nodes(listint_t **head)
{
for (int i = 0; i < 9; i++)
{
delete_nodeint_at_index(head, 0);
print_listint(*head);
printf("-----------------\n");
}
}
int main(void)
{
listint_t *head;
head = NULL;

/* Add nodes to the list */
add_nodes(&head);

/* Print the list before deletion */
print_listint(head);
printf("-----------------\n");

/* Delete nodes from the list */
delete_nodes(&head);
return (0);
}
