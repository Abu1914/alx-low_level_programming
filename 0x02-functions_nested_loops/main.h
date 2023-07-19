#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - write the character c to standard output
 * @c: The character to print
 *
 * Return: on success  1.
 * on error, -1 is returned, and error is set appropraitely.
 */

int _putchar(char c);

/**
 *print_alphabet - print lowercase alphabets
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 alphabets
 */

void print_alphabet_x10(void);

int _islower(int c);

int _isalpha(int c);

int print_sign(int n);

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);

void print_times_table(int n);

#endif
