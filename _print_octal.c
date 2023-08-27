#include "main.h"
/**
 * _print_octal - Prints octal representation
 * @t: Points to arguement list
 * @sn: Pointer to counter
 * Return: Number of printed character
 */
int _print_octal(va_list t, int *sn)
{
	unsigned int a = va_arg(t, unsigned int);
	char c[32];
	int b;

	b = 0;
	if (a == 0)
	{
		_putchar('0');
		(*sn)++;
		return (1);
	}
	for (; a > 0; b++)
	{
		c[b] = (a % 8) + '0';
		a /= 8;
	}
	for (b--; b >= 0; b--)
	{
		_putchar(c[b]);
		(*sn)++;
	}
	return (0);
}
