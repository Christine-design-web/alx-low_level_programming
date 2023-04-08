#include "main.h"

/**
 * print_binary - print binary equivalent of a decimal
 * @n: integer to mess with
 */

void print_binary(unsigned long int n)
{
	unsigned long int z = 1;

	z <<= ((sizeof(z) * 8) - 1);
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
		}
	while (z > 0)
	{
		if ((z & n) == 0)
			z = z >> 1;
		else
			break;
	}
	while (z > 0)
	{
		if ((z & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		z = z >> 1;
	}

}
