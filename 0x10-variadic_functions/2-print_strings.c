#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints variadic arguments
 * @separator: char to separate string
 * @n: const varaidic count/integer
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argc;
	unsigned int p;
	char *string;


	va_start(argc, n);
	for (p = 0; p < n; p++)
{
	string = va_arg(argc, char *);
	if (string == NULL)
		printf("%s", "(nil)");
	else
		printf("%s", string);

	if (separator && p < n - 1)
	{
		printf("%s", separator);
	}
}
	va_end(argc);
	printf("\n");
}
