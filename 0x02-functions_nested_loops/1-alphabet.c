#include "main.h"

/**
 * A function that print_alphabet, in lowercase.
 *
 *Return: Always 0.
*/

void print_alphabet(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
