#ifndef HOLBERTON_H_
#define HOLBERTON_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int _printf(const char *format, ...);

/*========================================*/

int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int prints(va_list list);
int printc(va_list list);
int _ourPrint(char c);
int (*verification(char a))(va_list);

#endif

#ifndef STRUCT_H
#define STRUCT_H
typedef struct conditionals
{
	char spec;
	int (*func)(va_list);
} cases;
#endif
