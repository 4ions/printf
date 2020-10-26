#include "holberton.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line
 *@separator: String to be printed between numbers
 *@n: number of integers passed to the function
 */

int printd(va_list list)
{
	unsigned int i;
	int num, size = 0;
	num = (va_arg(list, int));
	unsigned long int d = 1;

	if(num < 0)
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
		size += _ourPrint('0' + num/d);
		num %= d;
		d/= 10;
	}
	return (size);
}

int printi(va_list list)
{
	int num;

	num = printd(list);
	return (num);
}