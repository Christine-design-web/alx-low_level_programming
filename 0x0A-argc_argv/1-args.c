#include <stdio.h>
#include "main.h"
/**
 * main - print th name of the program
 * @argc: count arguments
 * @argv: Arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
