#include "main.h"

/**
 * print_alphabet - It prints lowercase 
 * letters
 *
 * return: 0
 */
void print_alhabet(void)
{
	int alp = 97;

	while (alp < 123)
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
	return (0);
}
