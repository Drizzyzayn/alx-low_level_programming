#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 * Return: void
 */

void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		_putchar (lowercase);

	_putchar('\n');
}
