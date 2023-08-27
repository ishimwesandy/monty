#include "monty.h"
/**
* executefile - methode that executes the opcode
* @stack: head linked list - stack
* @count: line counts
* @file: poiner to monty files
* @content: line contents
*/
int execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", m_push}, {"pall", m_pall}, {"pint", m_pint},
				{"pop", m_pop},
				{"swap", m_swap},
				{"add", m_add},
				{"nop", m_nop},
				{"sub", m_sub},
				{"div", m_div},
				{"mul", m_mul},
				{"mod", m_mod},
				{"pchar", m_pchar},
				{"pstr", m_pstr},
				{"rotl", m_rotl},
				{"rotr", m_rotr},
				{"queue", m_queue},
				{"stack", m_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
