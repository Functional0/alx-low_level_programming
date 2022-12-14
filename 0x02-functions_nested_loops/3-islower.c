#include "main.h"

/**
 * _islower - checks for lowercase letter
 * @c: argument
 * Return: 1 if true or 0 if false
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
