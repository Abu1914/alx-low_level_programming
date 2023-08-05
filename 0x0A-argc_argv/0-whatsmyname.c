#include <stdlib.h>
#include "main.h"

/**
 * main - a function used to print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n" , *argv);

	return (0);
}
