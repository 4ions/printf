#include "holberton.h"

/**
 * _printf - ##
 * @format: ##
 * Return: ##Return int
 */

int _printf(const char *format, ...)
{
	char buffer[4096], ch;
	char *tp;
	int val;
	int i = 0, j = 0;
	va_list list;

	va_start(list, format);
	while (ch = *format)
	{
		if (i == 4096)
		{
			fwrite(buffer, 1, 4096, stdout);
			i = 0;
		}
		if (ch == '%')
		{
			ch = *++format;
			if (ch == 'd')
			{
				val = va_arg(list, int);
				i = print_int(val, buffer, i);
			}
			if (ch == 's')
			{
				tp = va_arg(list, char*);
				while (*tp)
				{
					if (i == 4096)
					{
						fwrite(buffer, 1, 4096, stdout);
						i = 0;
					}
					buffer[i++] = *tp++;
				}
			}
		}
		else
		buffer[i++] = ch;
		format++;
	}
	va_end(list);
	fwrite(buffer, 1, i, stdout);
	return (0);
}
