#include "holberton.h"
#include <stdarg.h>


/**
*_printf - Functions to do the same that printf
*@format: All the
*
*Return: Return int
*/

int _printf(const char *format, ...)
{
	va_list va_print;
	int i = 0;
	char temp;
	char *temp2;

	if (format == NULL)
	{
	return (-1);
	}
	va_start(va_print, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				temp = va_arg(va_print, int);
				_putchar(temp);
				i++;
			}
			if (format[i + 1] == 's')
			{
				temp2 = va_arg(va_print, char *);
				_puts(temp2);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
		}

		format++;

	}
	_putchar('\n');
	va_end(va_print);
	return (0);
}
