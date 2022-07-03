#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *  Numbers should be printed in ascending order
 *  and followed by new line
 *  You can only use putchar four times in your code
 *  Return: always 0 (Success)
 */
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);
				if (ch != 57 || n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}

