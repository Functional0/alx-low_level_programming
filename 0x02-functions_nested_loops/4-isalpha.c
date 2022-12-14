#include "main.h"

/**
 * _isalpha - checks for uppercase letter
 * @c: argument
 * return: 1 if true or 0 if false
 */
int _isalpha(int c)
{
	if (c < 91 || c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}

