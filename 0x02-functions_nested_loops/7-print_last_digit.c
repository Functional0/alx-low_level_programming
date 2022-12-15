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

	if (r > 0)
	{
		ret = (r % 10);
	}
	else if (r < 0)
	{
		ret = (r * -1) % 10;
	}
	else
	{
		ret = r;
	}
	_putchar(ret + '0');
	return (ret);
}
