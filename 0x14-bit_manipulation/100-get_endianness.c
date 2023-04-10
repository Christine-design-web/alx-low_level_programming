#include "main.h"
/**
 * get_endianness - checking the machine if it's big
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int p = 1;
char *z = (char *) &p;
return (*z);
}
