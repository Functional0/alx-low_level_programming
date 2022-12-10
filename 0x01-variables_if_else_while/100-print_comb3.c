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

	n = 48;
	while (n < 58)
	{
		a =49;
		while (a < 58)
		{
			if (n != a && n < a)
			{
				putchar(n);
				putchar(a);
				if (n != 56 || a != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		n++;
	}
		putchar('\n');
		return (0);
}
