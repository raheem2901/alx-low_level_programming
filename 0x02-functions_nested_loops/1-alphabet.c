#include "main.h"

/**
 * main - prints the single digit numbers
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
	_putchar('\n') ;
}
