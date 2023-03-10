#include <stdio.h>
#include "main.h"
/**
 * main - Program that all arguments
 * @argv: Arguments
 * @argc: Count arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
