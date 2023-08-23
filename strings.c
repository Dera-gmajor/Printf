#include "main.h"
/**
 * strings - function that prints a string
 * @s: pointer to the string
 * @l: length of the string
 * Return: -1 if error, otherwise 1
 */
int strings(char *s, int l)
{
	return write(1, s, l);
}
