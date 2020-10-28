#include "holberton.h"
#include <stdio.h>

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
 *printi - Functions that return an integer
 * @list: Argument
 * Return: An integer
 */

int printi(va_list list)
{
	int num;

	num = printd(list);
	return (num);
}
/**
 *nBinary - Binary of an integer
 * @list: Argument
 * Return: An integer
 */
int nBinary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_ourPrint('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
	{
		return (-1);
	}
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
		{
			str[i]  = '0';
		}
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}

/**
 * base_len -  ##
 * @num: ##
 * @base: ##
 * Return: ##
 */

unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * rev_string - ##
 * @s: ##
 * Return: ##
 */

char *rev_string(char *s)
{
	int len, head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}


/**
 * _memcpy - ##
 * @dest: ##
 * @src: ##
 * @n: ##
 * Return: ##
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * write_base - ##
 * @str: ##
 */

void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_ourPrint(str[i]);
}
