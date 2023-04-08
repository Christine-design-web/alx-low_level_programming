#include "main.h"
/**
 * get_bit - gets bit at an index
 * @n: number to go through
 * @index: this is the index to go through
 * Return: The value bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
