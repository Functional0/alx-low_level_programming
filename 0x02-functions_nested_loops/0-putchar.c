#include "main.h"

/**
 * main - This program prints _putchar to 
 * the standard output
 *
 * return: always 0
 */
int main(void)
{
	int i;
	char _print[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(_print[i]);
	}
	_putchar('\n');
	return (0);
}
