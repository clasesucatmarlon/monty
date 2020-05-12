#include "monty.h"
/**
 * 
 * 
 */
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    stack_principal(argv[1]);
    return 0;
}