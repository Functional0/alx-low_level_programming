#include <stdio.h>

/**
 * main - prints numbers from
 * 0 - 9
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int a;
	int b;

	n = 48;
	while (n < 58)
	{
		a = 49;
		while (a < 58)
		{
			b = 50;
			while (b < 58)
			{
				if (n != a && n != b && n < a && a < b)
				{
					putchar(n);
					putchar(a);
					putchar(b);
					if (n != 55 || a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
				}
				b++;
			}
			a++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
