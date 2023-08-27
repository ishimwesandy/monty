#include "monty.h"
/**
  *m_sub-  Method that do sustration 
  *@head: stack on the head
  *@count: line numbers
 */
void m_sub(stack_t **head, unsigned int count)
{
	stack_t *a;
	int substr, nodes;

	a = *head;
	for (nodes = 0; a != NULL; nodes++)
		a = a->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	substr = a->next->n - a->n;
	a->next->n = substr;
	*head = a->next;
	free(a);
}
