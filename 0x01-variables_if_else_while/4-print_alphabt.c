#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *  and then in uppercase, followed by a new line
 *  Return: always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}

	}

	putchar(10); /* this is n ascii code for new line*/

	return (0);

}

