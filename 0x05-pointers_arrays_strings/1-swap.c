#include "main.h"

/**
 * swap_int - checks swaps two int value in memory
 * @a: int
 * @b: integer
 * 
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
