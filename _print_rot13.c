#include "main.h"
/**
 * _print_rot13 - prints strings in rot13
 * @t: points to arguement list
 * @sn: pointer to a counter
 * Return: 0
 */
int _print_rot13(va_list t, int *sn)
{
	char *s = va_arg(t, char *);
	int x = 0, y;
	char n[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z'};
	char m[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M'};

	if (s == NULL)
	{
		s = "(null)";
		strings(s, stringlength(s));
		*sn += stringlength(s);
		return (-1);
	}
	while (s[x] != '\0')
	{
		y = 0;
		while (n[y] != '\0')
		{
			if (s[x] == n[y])
			{
				_putchar(m[y]);
				*sn += 1;
				break;
			}
			y++;
		}
		if (n[y] == '\0')
		{
			_putchar(s[x]);
			*sn += 1;
		}
		x++;
	}
	return (0);
}
