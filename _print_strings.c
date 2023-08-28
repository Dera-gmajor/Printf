#include "main.h"
/**
 * _print_strings - prints strings
 * @t: pointer to list of arguement
 * @sn: pointer to counter
 * Return: 1 if no error, otherwise -1
 */
int _print_strings(va_list t, int *sn)
{
	char *s;

	s = va_arg(t, char *);
	if (s == NULL)
		s = "(null)";

	if (strings(s, stringlength(s)) != -1)
		*sn += stringlength(s);
	else
		return (-1);
	return (1);
}
