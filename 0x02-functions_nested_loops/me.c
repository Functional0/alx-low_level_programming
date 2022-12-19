#include <stdio.h>

/**
 * main - prints 1 to 10
 *
 * Return: 0
 */
int main(void)
{
	int a;
	
	for (a = 0; a < 10; a++)
	{
		if (a == 3)
		{
			continue;
		}
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
