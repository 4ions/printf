#include "holberton.h"
/**
 *prints - prints a string
 *@list: list of arguments
 *
 *Return: return size of string
 */
int prints(va_list list)
{

	int i = 0, size = 0;
	char *string;

	string = va_arg(list, char *);
	if (!string)
		string = "(null)";
	for (i = 0; string[i] != '\0'; i++)
	{
		_ourPrint(string[i]);
		size++;
	}

	return (size);
}
/**
 *printc - prints a string
 *@list: string in
 *
 *Return: return int
 */
int printc(va_list list)
{
	char temp;
	int size = 0;

	temp = va_arg(list, int);
	write(1, &temp, 1);
	size++;
	return (size);
}

/**
 * _ourPrint - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _ourPrint(char c)
{

	return (write(1, &c, 1));

}

int printr(va_list list)
{
	int i;
	char *str, *dest;

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	dest = rev_string(str);
	if(dest == NULL)
		return (-1);

	for (i = 0; dest[i] != '\0'; i++)
	{
		_ourPrint(dest[i]);
	}
	free(dest);
	return (i);
}
