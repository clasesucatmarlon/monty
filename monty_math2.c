#include "monty.h"
/**
 * _mod - mod top of stack y second top stack
 * @stack: pointer to lists for monty stack
 * @line_number: number of line opcode occurs on
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int modu = 0, i = 0;

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (*stack == NULL || (*stack)->next == NULL || i <= 1)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	modu = (*stack)->next->n % (*stack)->n;
	_pop(stack, line_number);

	(*stack)->n = modu;
}
