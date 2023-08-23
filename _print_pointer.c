#include "main.h"
/**
 * _print_hex - Prints hexadecimal
 * @ab: int type
 * @sn: Pointer to counter
 * Return: 0
 */
int _print_hex(unsigned long int ab, int *sn)
{
	char buffer[32];
	int y = 0;

	if (ab == 0)
	{
		_putchar('0');
		(*sn)++;
		return (1);
	}
	for (; ab > 0; y++)
	{
		buffer[y] = (ab % 16) + (ab % 16 > 9 ? 'a' - 10 : '0');
		ab /= 16;
	}
	for (y--; y >= 0; y--)
	{
		_putchar(buffer[y]);
		(*sn)++;
	}
	return (0);
}

/**
 * _print_pointer - prints pointer
 * @t: pointer to list of arguement
 * @sn: Pointer to counter
 * Return: 0
 */
int _print_pointer(va_list t, int *sn)
{
	char *s = "(nil)";
	long int n;
	void *ptr = va_arg(t, void *);

	if (ptr == NULL)
	{
		strings(s, stringlength(s));
		*sn += stringlength(s);
		return (1);
	}
	_putchar('0');
	_putchar('x');
	*sn += 2;
	n = (unsigned long int)ptr;

	_print_hex(n, sn);
	return (0);
}
