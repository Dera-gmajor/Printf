#include "main.h"
/**
 * _print_hexa_upper - prints uppercase hexadecimal
 * @sn: pointer to the numbers
 * @t: va_list containing arguments
 * Return: counts of character printed
 */
int _print_hexa_upper(int *sn, va_list t)
{
	char m[32];
	unsigned int r = va_arg(t, unsigned int);
	int q = 0;
	int p = 0;
	char hd[] = "0123456789ABCDEF";

	if (r == 0)
	{
		putchar('0');
		(*sn)++;
		return (1);
	}
	while (r > 0)
	{
		m[q] = hd[r % 16];
		r /= 16;
		q++;
	}
	q--;
	while (q >= 0)
	{
		putchar(m[q]);
		q--;
		(*sn)++;
		p++;
	}
	return (p);
}
