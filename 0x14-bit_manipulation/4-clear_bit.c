#include "main.h"
/**
 * clear_bit - clear bit to 0 at given index
 * @n: number to change
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int p;
unsigned long int s = 1;

p = (sizeof(unsigned long int) * 8);
if (index > p)
return (-1);

s = ~(s << index);
*n = (*n & s);
return (1);
}
