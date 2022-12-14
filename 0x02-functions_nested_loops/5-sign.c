#include "main.h"

/**
 * print_sign - prints the sign of argument
 * @n: the argument
 * return: 1 if successfull or 0 if not
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
	return (0);
}
