#include <stdio.h>
/**
 * main - prints the single digit numbers
 *  and followed by new line
 *  You are not allowed to use any variable of type char
 *  Return: always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
	putchar(ch);
	}
	putchar(10);
	return (0);

}

