#include "main.h"

/**
 * times_table - This prints times table from
 * 0 to 9
 *
 * Return: 9
 */
void times_table(void)
{
	int a, b, ret;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			ret = a * b;
			if (ret > 9)
			{
				_putchar(ret / 10 + '0');
				_putchar(ret % 10 + '0');
			}
			else
				_putchar(ret + '0');
			if (b != 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
