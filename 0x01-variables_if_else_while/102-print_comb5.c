#include <stdio.hi>

/**
* main - Prints all possible combinations of two two-digit numbers
* ranging from 0-99, separated by a comma followed by a space.
* Return: Always 0 (Success)
*/

void printTwoDigitNumbers(void)
{
	int num1, num2;

	for (num1 = 10; num1 <= 99; num1++)
	{
	for (num2 = 10; num2 <= 99; num2++)
	{
	putchar((num1 / 10) + '0');
	putchar((num1 % 10) + '0');
	putchar(' ');
	putchar((num2 / 10) + '0');
	putchar((num2 % 10) + '0');
	putchar('\n');
	}
	}
	}
	int main(void)
	{

	printTwoDigitNumber();

	return (0);
}
