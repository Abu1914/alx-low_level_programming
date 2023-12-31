#include "main.h"

/**
 *_strcmp - used to compare two strings
 * @s1: first pointer
 * @s2: second pointer
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
