#include "main.h"

/**
 * print_alphabet_x10 - It prints lowercase
 * letters ten times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int alp = 97;
	int i = 0;

	while (i < 10)
	{
		alp = 97;
		while (alp < 123)
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
		i++;
	}
}
