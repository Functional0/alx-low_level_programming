#include "main.h"

/**
 * main - This program prints _putchar to
 * the standard output
 * Return: Always return 0
 */
int main(void)
{
	int i = 0;
	char _print[] = "_putchar";

	while (i < 8)
	{
		_putchar(_print[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
