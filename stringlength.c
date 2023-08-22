#include "main.h"
/**
 * stringlength - length of the string calculation
 * @str: string
 * Return: length of the string
 */
int stringlength(char *str)
{
	int k = 0;
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		k++;
	}
	return (k);
}
