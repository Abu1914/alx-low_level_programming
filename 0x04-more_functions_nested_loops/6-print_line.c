#include "main.h"

/**
 * print_line - Prints a straight line in terminal
 * @n: number used to test
 * Return: always 0 (success)
 */

void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}
	_putchar('\n');
}
