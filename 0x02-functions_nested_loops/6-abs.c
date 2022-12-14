#include "main.h"

/**
 * _abs - This programme compute the
 * absolute value
 * @r: Argument passed
 * Return: 1
 */
int _abs(int r)
{
	int ret;

	if (r < 0)
	{
		ret = (r * -1);
	}
	else if (r > 0)
	{
		ret = (r * 1);
	}
	else
	{
		ret = (r);
	}
	return (ret);
}
