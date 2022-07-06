#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 *  and followed by new line
 *  Return: always 0 (Success)
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
