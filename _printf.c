#include "main.h"
/**
 * _printf - similar to printf
 * @format: format of the string
 * Return: number of printed character
 */
int _printf(const char *format, ...)
{
	int v, w = 0;
	va_list t;
	int *sn = &w;
	tag t[] = {
		{'i', print_int}, {'c', print_char}, {'u', print_unsigned},
		{'p', print_pointer}, {'s', print_strings}, {'d', print_int},
		{'r', print_reverse}, {'b', print_binary}, {'x', print_hexa_lower},
		{'o', print_octal}, {'R', print_rot13}, {'S', print_non_printable},
		{'X', print_hexa_upper}, {'\0', NULL}
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(t, format);
	for (v = 0; format[v] != '\0'; v++)
	{
		if (format[v] != '%')
		{
			_putchar(format[v]);
			*sn += 1;
		}
		else if (format[v] == '%' && format[v + 1] != '%')
		{
			v++;
			tag_t(format, &v, x, sn, t);
		}
		else if (format[v] == '%' && format[v + 1])
		{
			v++;
			_putchar(format[v]);
			*sn += 1;
		}
	}
	va_end(t);
	return (w);
}

/**
 * tag_t - checks for sign
 * @format: string format
 * @a: pointer to format
 * @q: pointer to struct
 * @sn: pointer to counter
 * @t: pointer to arguements
 */
void tag_t(const char *format, int *a, struct tag *q, int *sn, va_list t)
{
	va_list u;
	int m, n = 3;
	int b = *a;
	int h = 0;
	sign s[] = {{'+'}, {' '}, {'#'}, {'\0'}};

	va_copy(u, t);

	while (d(format[b], s) != -1)
	{
		for (n = 0; s[n].g != '\0'; n++)
		{
			if (format[b] == s[n].g)
			{
				if (format[b] == '+' && h < 2)
					h = 1;
				else if (format[b] == '#')
					h = 2;
				b++;
				break;
			}
		}
	}
	m = e(format[b], q);

	if (m != -1)
	{
		if (s[n].g != '\0')
			s[n].tg(h, s[n].g, m, u, sn);
		q[m].tg(t, sn);
		*a = b;
	}
	else
	{
		_putchar('%');
		(*a)--;
		*sn += 1;
		return;
	}
}
