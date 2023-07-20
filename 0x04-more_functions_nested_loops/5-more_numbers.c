#include "main.h"

/**
 * more_numbers - used to print numbers from 0-9.
 * Return: Always 0(success)
 */

void more_numbers(void)
{
	int x,y;
	
	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 0)
	{
	_putchar((y / 10) + '0');
	}
	_putchar(( y % 10) + '0');
	}
	_putchar('\n');
}
