#include <unistd.h>

/**
 * _main - Entry point
 *
 * Return: Always 0 as Success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
