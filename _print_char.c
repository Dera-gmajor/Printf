#include "main.h"
/**
* _print_char - prints character
* @t: pointer to list of arguement
* @sn: pointer to counter
* Return: 1 if no error, -1 otherwise
*/
int _print_char(va_list t, int *sn)
{
	if (_putchar((unsigned char)va_arg(t, int)) != -1)
	{
		*sn += 1;
	}
	else
		return (-1);
	return (1);
}
