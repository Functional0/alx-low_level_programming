#include <stdio.h>

/**
 * main - prints lowercase alphabets from
 * a - z
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int r;

	n = 97;
	r = 65;
	while (n < 123)
	{
		putchar(n);
		n++;
	}
	while (r < 91)
	{
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
