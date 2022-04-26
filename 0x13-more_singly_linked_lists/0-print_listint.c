#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_listint - print all elements of a listint_t list
 *@h: header
 *
 *
 *Description: Single linked list structure
 *Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		printf("%d\n", temp->n);
		count++;
	}
	return (count);

}
#include "main.h"

/**
* main - Entry point
* @x: the input
* Return: Always 0 (Success)
*/
int main(void)
{
return (0);
}
