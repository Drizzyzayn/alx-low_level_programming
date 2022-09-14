#include "main.h"

/**
 * print-alphabet_x10 - print alphabets in lower cases
 * description: print 10 timws
 * Return: Always 0(success)
 */

void print_alphabet_x10(void)
{

	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char ch = 'a';
	       	while (ch <= 'z')
		{
			     _putchar(ch);
			     ch++;
	       	}
		alphabet_count++;
		_putchar('\n');
				}
}
