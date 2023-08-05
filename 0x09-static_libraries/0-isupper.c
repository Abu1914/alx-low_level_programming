#include "main.h"

/**
 * _isupper - TO check for upper case character
 * @c: Character used to test
 * Return: 1 is char is uppercase and 0 if character is lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
