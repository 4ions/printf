#include "holberton.h"

/**
 * print_int - ##
 * @val: ##
 * @buffer: ##
 * @pos: ##
 * Return: ##
 */


int print_int(int val, char *buffer, int pos)
{
	int back = val;
	char s[30];
	int i = 0;

	while (val)
	{
		s[i++] = val % 10 + '0';

		val /= 10;
	}
	i--;
	if (pos + i > 4096)
	{
		fwrite(buffer, 1, 4096, stdout);
		pos = 0;
	}
	while (i >= 0)
	{
		buffer[pos++] = s[i--];
	}
	return (pos);
}
