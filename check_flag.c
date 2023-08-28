#include "main.h"
/**
 * space_sn - prints space sign
 * @a: sign
 * @c: char
 * @sn: string count
 * @u: va_list
 * @b: value
 */

void space_sn(int a, char c, int *sn, va_list u, int b)
{
	if ((c == ' ' && (b == 2 || b == 3 || b == 12)) && a == 0)
	{
		if (va_arg(u, int) >= 0 || b == 12)
		{
			_putchar(' ');
			*sn += 1;
		}
	}
	else if (a <= 2 && (b == 2 || b == 3 || b == 12))
	{
		_putchar('+');
		*sn += 1;
	}
	else if (a == 2 && !(b == 2 || b == 3 || b == 12))
	{
		window_sn(a, '#', sn, u, b);
	}
}

/**
 * window_sn - prints windows sign
 * @a: sign
 * @c: char
 * @sn: string count
 * @u: va_list
 * @b: value
 */
void window_sn(int a, char c, int *sn, va_list u, int b)
{
	if (va_arg(u, int) != 0)
	{
		if (a > 1 && !(b == 2 || b == 3 || b == 12))
		{
			if (c == '#' && b == 7)
			{
				_putchar('0');
				*sn += 1;
			}
			else if (c == '#' && b == 9)
			{
				_putchar('0');
				_putchar('x');
				*sn += 2;
			}
			else if (c == '#' && b == 10)
			{
				_putchar('0');
				_putchar('X');
				*sn += 2;
			}
		}
		else if (a < 2 && (b == 2 || b == 3 || b == 12))
		{
			_putchar('+');
			*sn += 1;
		}
	}
}

/**
 * postive_sn - prints positive sign
 * @a: sign
 * @c: char
 * @sn: string count
 * @u: va_list
 * @b: value
 */

void postive_sn(int a, char c, int *sn, va_list u, int b)
{
	if (a < 2 || (b == 2 || b == 3 || b == 12))
	{
		if (c == '+' && (b == 2 || b == 3 || b == 12))
		{
			if (va_arg(u, int) >= 0 || b == 12)
			{
				_putchar('+');
				*sn += 1;
			}
		}
	}
	else
	{
		window_sn(a, '#', sn, u, b);
	}
}
