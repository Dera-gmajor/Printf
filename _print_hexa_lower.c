#include "main.h"
/**
 * _print_hexa_lower - Prints lowercase hexadecimal
 * @t: Points to arguement list
 * @sn: Pointer to counter
 * Return: number of printed char
 */
int _print_hexa_lower(va_list t, int *sn)
{
	unsigned int a = va_arg(t, unsigned int);
	int b;
	char c[32];

	b = 0;
	if (a == 0)
	{
		_putchar('0');
		(*sn)++;
		return (1);
	}
	for (; a > 0; a /= 16, b++)
	{
		c[b] = (a % 16) + (a % 16 > 9 ? 'a' - 10 : '0');
	}
	for (b--; b >= 0; b--)
	{
		_putchar(c[b]);
		(*sn)++;
	}
	return (0);
}
