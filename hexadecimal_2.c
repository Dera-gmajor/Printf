#include "main.h"
/**
 * hexadecimal_2 - prints uppercase hexadecimal
 * @n: pointer to the numbers
 * @dx: va_list containing arguments
 * Return: counts of character printed
 */
int hexadecimal_2(int *n, va_list dx)
{
	char m[32];
	unsigned int r = va_arg(dx, unsigned int);
	int q = 0;
	int p = 0;
	char hd[] = "0123456789ABCDEF";

	if (r == 0)
	{
		putchar('0');
		(*n)++;
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
		(*n)++;
		p++;
	}
	return (p);
}
