#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10x
 *  and followed by new line
 *  Return: always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
