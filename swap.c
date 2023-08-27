#include "monty.h"
/**
 * m_swap -method that  adds the top two elements on  the stack.
 * @head: stack head
 * @count: line_number
*/
void m_swap(stack_t **head, unsigned int count)
{
	stack_t *h;
	int l = 0, a;

	h = *head;
	while (h)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	a = h->n;
	h->n = h->next->n;
	h->next->n = a;
}
