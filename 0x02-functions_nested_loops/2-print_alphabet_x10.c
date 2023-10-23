#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)/*Found in the header file*/
{
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
		i++;
	}
}
