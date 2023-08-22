#include "main.h"
/**
 * _printf - similar to printf
 * @format: format of the string
 * Return: number of printed character
 */
int _printf(const char *format, ...)
{
	va_list t;
	int g, f = 0;
	int *sn = &g;
	tag t[] = {
		{'i', print_int}, {'c', print_char}, {'u', print_unsigned}, {'p', print_pointer}, {'s', print_strings}, {'d', print_int}, {'r', print_reverse}, {'b', print_binary}, {'x', print_hexa_lower}, {'o', print_octal}, {'R', print_rot13}, {'S', print_non_printable}, {'X', print_hexa_upper}, {'\0', NULL}
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(t, format);
	for (g = 0; format[g] != '\0'; g++)
	{
		if (format[g] != '%')
		{
			_putchar(format[g]);
			*sn += 1;
		}
		else if (format[g] == '%' && format[g + 1] != '%')
		{
			g++;

			int v = g;
			int a = 0;
			sign s[] = {{'+'}, {' '}, {'#'}, {'\0'}};

			while (d(format[v], s) != -1)
			{
				for (int m = 0; s[m]g != '\0'; m++)
				{
					if (format[v] == s[m].g)
					{
						if (format[v] == '+' && a < 2)
							a = 1;
						else if (format[v] == '#')
							a = 2;
						v++;
						break;
					}
				}
			}
			int n = e(format[v], t);

			if (n != -1)
			{
				if (s[m].g != '\0')
					s[m].tg(a, s[m].g, n, t, sn);
				t[n].tg(t, sn);
				g = v;
			}
			else
			{
				_putchar('%');
				(g)--;
				*sn += 1;
			}
		}
		else if (format[g] == '%' && format[g + 1] == '%')
		{
			g++;
			_putchar(format[g]);
			*sn += 1;
		}
	}
	va_end(t);
	return (*sn);
}
