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

	n = 97;
	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
