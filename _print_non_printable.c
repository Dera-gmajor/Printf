#include "main.h"
/**
 * _print_non_printable - print non printable char
 * @t: points to the list of arguments
 * @sn: pointer
 * Return: 0;
 */
int _print_non_printable(va_list t, int *sn)
{
	char *s = va_arg(t, char *);
	int f;

	if (s == NULL)
		s = "(null)";
	for (f = 0; s[f] != '\0'; f++)
	{
		if ((s[f] > 0 && s[f] < 32) || s[f] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			*sn += 2;
			if (s[f] < 16)
			{
				_putchar('0');
				*sn += 1;
			}
			upper_hexa(s[f], sn);
		}
		else
		{
			_putchar(s[f]);
			*sn += 1;
		}
	}
	return (0);
}

/**
 * upper_hexa - prints hexadecimal
 * @n: number to print
 * @sn: ..
 * Return: 0 if there is number, otherwise 1
 */
int upper_hexa(int n, int *sn)
{
	char buffer[32];
	char hexa[] = "0123456789ABCDEF";
	int e;
	int dx = 0;

	if (n == 0)
	{
		_putchar('0');
		(*sn)++;
		return (1);
	}
	for (e = 0; n > 0; e++)
	{
		buffer[e] = hexa[n % 16];
		n /= 16;
	}
	e--;
	for (; e >= 0; e--)
	{
		_putchar(buffer[e]);
		(*sn)++;
		dx++;
	}
	return (0);
}
