#include "holberton.h"

/**
 * printd - Function that prints numbers, followed by a new line
 *@list: String to be printed between numbers
 *Return: ##
 */

int printd(va_list list)
{
	int num, size, div;
	unsigned int d;

	num = (va_arg(list, int));
	div = 1;
	size = 0;

	if (num < 0)
	{
		size += _ourPrint('-');
		d  = num * -1;
	}
	else
	{
		d = num;
	}
	while (d / div > 9)
	div *= 10;

	while (div != 0)
	{
		size += _ourPrint('0' + d / div);
		d %= div;
		div /= 10;
	}
	return (size);
}

/**
 *printi - ##
 * @list: Argument
 * Return: An integer
 */

int printi(va_list list)
{
	int num;

	num = printd(list);
	return (num);
}
