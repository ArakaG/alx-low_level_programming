#include "main.h"

/**
 *  _pow_recursion - Prints the value of x raised to the power of y
 *  @x: The value to mutiply
 *  @y: The times to multiply the value
 *  Return: The value multipied y times
 */
int  _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
