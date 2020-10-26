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
	int i = 0, fun;
	int (*func)(va_list);

	if (format == NULL)
	{
	return (-1);
	}
	va_start(va_print, format);

	while(format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
				func = verification(format[i + 1]);
				if(func != NULL)
				{
					fun += func(va_print);
					i++;
				}
				else
				{
					write(1, &format[i], 1);
				}
			}
			else
			{
				write(1, &format[i], 1);
				i++;
			}
		}
		else
		{
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(va_print);
	return (0);
}
