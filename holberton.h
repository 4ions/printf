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
int print_numbers(va_list list);
int printd(va_list list);
int printi(va_list list);
int nBinary(va_list list);

#endif

#ifndef STRUCT_H
#define STRUCT_H
/**
 *struct conditionals - struct op
 *
 *@spec: specifications to comparate
 *@func: function associated
 */
typedef struct conditionals
{
	char spec;
	int (*func)(va_list);
} cases;
#endif
