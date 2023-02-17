#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - The program will assign a randm number to the variable n each time executed.
 * Return:Always 0 (success)
 */
int main(void)
{
	int n;
	stand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
