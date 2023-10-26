#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @n: the string to print
 * Return: Nothing
 */
void _puts_recursion(char *n)
{
	if (*n == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*n);
	n++;
	_puts_recursion(n);
}
