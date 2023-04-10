#include "main.h"

/**
 * flip_bits - determine how many bits to change
 * @n: number1
 * @m: number2
 * Return: how many bits differ
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int c = 0;
unsigned long int p;

p = n ^ m;

do {
c += (p & 1);
p >>= 1;
} while
(p > 0);

return (c);
}
