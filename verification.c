#include "holberton.h"
/**
 * verification - verificate if are some special input
 * @a: char to verificate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int (*verification(char a))(va_list)
{
	cases list[] = {
		{'c', printc},
		{'s', prints},
		{'d', printd},
		{'i', printi},
		{'b', nBinary},
		{'r', rev_string},
		{'\0', '\0'}
	};
	int i = 0;

	while (list[i].spec != '\0')
	{
		if (a == list[i].spec)
		{

			return (list[i].func);
			i++;
		}
		else
		{
			i++;
		}
	}
	return (NULL);

}
