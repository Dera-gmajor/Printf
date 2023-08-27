#include "main.h"
/**
 * _print_binary - prints a binary number
 * @t: points to arguement list
 * @sn: pointer to counter
 * Return: 0
 */
int _print_binary(va_list t, __attribute__((unused)) int *sn)
{
	char c[32];
	int b = 0;
	unsigned int a = va_arg(t, unsigned int);

	if (a == 0)
	{
		_putchar('0');
		(*sn)++;
		return (1);
	}
	while (a > 0)
	{
		c[b] = (a % 2) + '0';
		a /= 2;
		b++;
	}
	b--;
	while (b >= 0)
	{
		_putchar(c[b]);
		(*sn)++;
		b--;
	}
	return (0);
}
