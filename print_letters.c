#include "holberton.h"
/**
 *_puts - prints a string
 *@str: string in
 *
 *Return: no return
 */
int prints(va_list list)
{

	int i = 0, size = 0;
	char *string;
	string = va_arg(list, char *);
	if(!string)
		string = "(null)";
	for (i= 0; string[i] != '\0'; i++)
	{
		_ourPrint(string[i]);
		size++;
	}

	return (size);
}
/**
 *_printc - prints a string
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
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _ourPrint(char c)
{

	return (write(1, &c, 1));

}
