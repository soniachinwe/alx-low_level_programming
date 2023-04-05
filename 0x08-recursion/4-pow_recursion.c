#include "main.h"

/**
 * _pow_recursion - funtion to return the value of x raised to the power of y
 * @x: value to raise the power of
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
