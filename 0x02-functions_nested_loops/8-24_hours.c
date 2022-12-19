#include "main.h"

/**
 * jack_bauer - Prints 24 hour time
 * Return: 0
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		b = 0;
		while (b < 10)
		{
			if (a == 2 && b > 3)
				break;
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
				}
			c++;
			}
		b++;
		}
	}
}
