#include "main.h"

/**
 * _Pow_recursion - Returns the value of x to the power y
 * @x: the value to Multiply
 * @y: number of times to multiply the value
 *
 * Return: the value mutiplied times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
