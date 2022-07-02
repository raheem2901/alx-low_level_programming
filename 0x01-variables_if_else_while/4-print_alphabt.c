#include <stdio.h>
/*
 * Write a program that prints the alphabet in lowercase
 *  and then in uppercase, followed by a new line
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

