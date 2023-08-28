#include "main.h"
/**
 * _print_reverse - reverses a string
 * @t: points to the list of arguments
 * @sn: pointer
 * Return: 1
 */
int _print_reverse(va_list t, int *sn)
{
	int b;
	char *s = va_arg(t, char *);
	int length = stringlength(s);
	char *end = s + length - 1;

	if (s == NULL)
	{
		return (-1);
	}

	while (end >= s)
	{
		_putchar(*end);
		end--;
		b++;
	}
	*sn += b;
	return (0);
}
