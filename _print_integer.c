#include "main.h"
/**
 * _print_integer - prints an integer
 * @t: points to the list of arguments
 * @sn: pointer
 * Return: 0
 */
int _print_integer(va_list t, int *sn)
{
	unsigned int n = va_arg(t, int);

	_integer(n, sn);

	return (0);
}
