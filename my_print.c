#include "holberton.h"

/**
 * myprintf - ##
 * @format: ##
 * Return: ##
 */

int myprintf(const char *format ,...);

/**
 * print_int - ##
 * @val: ##
 * @buffer: ##
 * @pos: ##
 */

int print_int(int val,char * buffer,int pos);


/**
 * main - ##
 * 
 * Return: ##
 */


int main()
{
	int alen, elen;
	char *c = "z";
	char *str = NULL;
	int este = 234;
	myprintf("START OF TEST\n");
	myprintf("=====================\n");
	myprintf("Hello %s %d \n","kishore",143);
	myprintf("Hello %s %d \n", c ,este);

	return (0);
}

int myprintf(const char *format ,...)
{
	char buffer[4096],ch;
	char *tp;
	va_list list;
	va_start(list,format);
	int val;
	int i=0,j=0;
	while(ch=*format)
	{
		if(i==4096)
		{
			fwrite(buffer,1,4096,stdout);
			i=0;
		}
		if(ch=='%')
		{
			ch=*++format;
			if(ch=='d')
			{
				val=va_arg(list,int);
				i=print_int(val,buffer,i);
			}
			if(ch=='s')
			{
				tp=va_arg(list,char*);
				while(*tp)
				{
					if(i==4096)
					{
						// fwrite(stdout, buffer, 4096);
						fwrite(buffer,1,4096,stdout);
						i=0;
					}
					buffer[i++]=*tp++;
				}
			}
		}
		else buffer[i++]=ch;
		format++;
	}
	va_end(list);
	fwrite(buffer,1,i,stdout);
	return 0;
}

int print_int(int val,char * buffer,int pos)
{
	int back=val;
	char s[30];
	int i=0;
	while(val)
	{
		s[i++]=val%10+'0';
		val/=10;
	}
	i--;
	if(pos+i>4096)
	{
		fwrite(buffer,1,4096,stdout);
		pos=0;
	}
	while(i>=0)
	{
		buffer[pos++]=s[i--];
	}
	return pos;
}