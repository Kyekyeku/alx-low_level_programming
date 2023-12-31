#include <unintd.h>

/**
 * _putchar - writes the c to stdout
 * @c: The Character to print
 *
 * Return: On success 1.
 * On error, return -1,and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
