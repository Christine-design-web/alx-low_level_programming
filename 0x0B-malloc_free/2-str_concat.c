#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int x, con1, con2;
	char *conc;

	x = 0;
	con1 = 0;
	con2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
	{
		x++;
		con1++;
	}

	x = 0;

	while (s2[x] != '\0')
	{
		x++;
		con2++;
	}
	conc = malloc(sizeof(char) * (con1 + con2 + 1));
	if (conc == NULL)
		return (NULL);

	for (x = 0; x < con1; x++)
	{
		conc[x] = s1[x];
	}

	for (x = 0; x < con2; x++)
	{
		conc[x + con1] = s2[x];
	}
	conc[x + con1] = '\0';
	return (conc);
}
