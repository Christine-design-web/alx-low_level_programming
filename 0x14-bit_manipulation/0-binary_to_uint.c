#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - binary to uint
 * @b: string to convert
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int p = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			p = (p << 1) | 1;
		else if (*b == '0')
			p <<= 1;
		else
			return (0);
		b++;
	}
	return (p);
}
