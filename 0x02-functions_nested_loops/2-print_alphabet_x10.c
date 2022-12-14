#include "main.h"

/**
 * print_alphabet_x10 - It prints lowercase 
 * letters ten times
 *
 * return: 0
 */
void print_alhabet_x10(void)
{
	int alp = 97;
	int i;

	for (i = 0, i < 10, i++)
	{
		alp = 97;
		while (alp < 123)
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
	}
	return (0);
}
