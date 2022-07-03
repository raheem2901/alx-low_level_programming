#include <stdio.h>
/**
 * main - prints the all the numbers of base 16 in lower case
 *  and followed by new line
 *  You can only use putchar twice in your code
 *  Return: always 0 (Success)
 */
int main(void)

{
	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}


	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar (10);/*this is the ascii code for new line*/

	return (0);
}
