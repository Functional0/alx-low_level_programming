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

	n = 48;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
