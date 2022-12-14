#include "main.h"

/**
 * print_alphabet - It prints lowercase 
 * letters
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int alp = 97;

	while (alp < 123)
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
