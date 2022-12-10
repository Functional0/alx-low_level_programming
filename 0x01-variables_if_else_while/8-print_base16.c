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
	int a;

	n = 97;
	a = 48;
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	while (n < 103)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
