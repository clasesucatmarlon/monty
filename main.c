#include "monty.h"
/**
 * main - function principal
 * @ac: int num of arguments
 * @av: opcode file
 * Return: 0
 */

int main(int ac, char **av)
{
	stack_t *stack;

	stack = NULL;
	if (ac != 2)
	{
		printf("USAGE: monty file \n");
		exit(EXIT_FAILURE);
	}
	read_file(av[1], &stack);
	free(stack);
	return (0);
}
