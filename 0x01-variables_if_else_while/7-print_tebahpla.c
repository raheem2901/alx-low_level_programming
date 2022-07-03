#include <stdio.h>
/**
 * main - prints the alphabet from z to a
 *  and followed by new line
 *  You can only use putchar twice in your code
 *  Return: always 0 (Success)
 */
int main(void)

{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar (10);/*this is the ascii code for new line*/

	return (0);
}
