#include "monty.h"
/**
 * m_pstr - methods that  print  string starting at the top of the stack,
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void m_pstr(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
