#include <unistd.h>
/**
 * main - Entry point of the putchar
 * Return 0 (success)
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
