#include "monty.h"
/**
 * stack_principal - prepocesa la informacion
 * @argv: points to the file Monthy
 * 
 * Return: 0 always
 */
void stack_principal(char *argv)
{
    FILE* file_mothy;  size_t len; int lineas;
    char buff[1024], *buffer, *token;

    file_mothy = fopen(argv, "r");
    printf("%s", argv);
    len = fread(buff, sizeof(char), 1024, file_mothy);
    buff[len++] = '\0';
    buffer = buff;
    token = strtok(buffer, "\n");
    lineas = 1;
    while(token)
    {
        printf("%s %i\n, ", token, lineas);
        lineas++;
        token = strtok(NULL, "\n");
    }
    fclose(file_mothy);
}