#include "main.h"
/**
 * print_sign - prints sign based on condition
 * @n: argument passed
 *  Return: return 1, 0 , -1 depending on condition
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}
