#include "main.h"
/**
*_integer - prints an integer
*@a: the integer
*@sn: pointer
*/
void _integer(unsigned int a, int *sn)
{
	if ((int)a < 0)
	{
		_putchar('-');
		*sn += 1;
		a *= -1;
	}
	if (a / 10)
		_integer(a / 10, sn);
	_putchar(a % 10 + '0');
	*sn += 1;
}
