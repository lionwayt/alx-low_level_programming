#include "main.h"

/**
 * print_alphabet_x10 - function to print..
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char c, j;

	for (j = 0; j <= 9; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
