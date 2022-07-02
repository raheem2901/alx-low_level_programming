#include <stdio.h>
/**
 * main - prints the alphabet in lower case
 *  and then in uppercase, followed by a new line
 *  Return: always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 112; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}

	putchar(10); /* this is n ascii code for new line*/

	return (0);

}
