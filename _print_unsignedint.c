#include "main.h"
/**
 * _print_unsignedint - prints unsigned numbers
 * @t: points to arguement list
 * @sn: pointer to counter
 * Return: 0
 */
int _print_unsignedint(va_list t, int *sn)
{
	int b, d = 0;
	unsigned int a = va_arg(t, unsigned int);
	char c[32];

	b = 0;
	if (a == 0)
	{
		_putchar('0');
		d++;
	}
	else
	{
		for (; a > 0; a /= 10)
		{
			c[b] = (a % 10) + '0';
			b++;
		}
		for (b--; b >= 0; b--)
		{
			_putchar(c[b]);
			d++;
		}
	}
	*sn += d;
	return (0);
}
