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
	int m;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
			for (m = 50; m <= 57; m++)
			{
				if (n > ch && m > n)
				{
					putchar(ch);
					putchar(n);
					putchar(m);
					if (ch != 56 || n != 56 || m != 57)
					{
						putchar(44);
						putchar(32);
					}

				}
			}
		}
	}
	putchar(10);
	return (0);
}

