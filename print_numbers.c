#include "holberton.h"

/**
 * printd - Function that prints numbers, followed by a new line
 *@list: String to be printed between numbers
 *Return: ##
 */

int printd(va_list list)
{
	int num, size = 0;
	unsigned long int d = 1;

	num = (va_arg(list, int));

	if (num < 0)
	{
		size += _ourPrint('-');
		num = num * -1;
	}
	else
	{
		num = num;
	}
	while (num / d > 9)
	d *= 10;

	while (d != 0)
	{
		size += _ourPrint('0' + num / d);
		num %= d;
		d /= 10;
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
