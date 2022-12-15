#include "main.h"

/**
 * print_last_digit - This programme prints
 * last digit of any input value
 * @r: value to be read
 * Return: 1
 */
int print_last_digit(int r)
{
	int ret;

	if (r < 0)
	{
		ret = -1 * (r % 10);
	}
	else
	{
		ret = r % 10;
	}
	_putchar(ret + '0');
	return (ret);
}
