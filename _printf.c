#include "holberton.h"

/**
*_printf - Functions to do the same that printf
*@format: All the
*
*Return: Return int
**/

int _printf(const char *format, ...)
{
	va_list va_print;
	int i = 0, fun = 0;
	int (*func)(va_list);

	if (!format || (format[0] == '%' && format[1] == '\0'))
	return (-1);
	va_start(va_print, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
				func = verification(format[i + 1]);
				if (func != NULL)
				{
					fun += func(va_print);
					i++;
				}
				else
				{
					write(1, &format[i], 1);
					fun++;
				}
			}
			else
			{
				write(1, &format[i], 1);
				fun++;
				i++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			fun++;
		}
	}
	va_end(va_print);
	return (fun);
}
