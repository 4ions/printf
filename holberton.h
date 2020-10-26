#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
#endif

#ifndef _STRUCT_H
#define _STRUCT_H

typedef struct
{
	char *characters;
	void (*func)(va_list);
} prAll;

#endif

