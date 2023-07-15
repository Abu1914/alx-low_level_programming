#include <stdio.h>

/**
* main - lowercase alphabets
* Return: Always 0 (Success)
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
	putchar(LETTER);
	LETTER++;
	}
	putchar('\n');
	return (0);
}
