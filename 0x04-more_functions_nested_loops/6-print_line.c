#include "main.h"
/**
 * print_line - Draws a straight line according to parameter
 * @n: The number of lines to draw
 * Return: empty
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}