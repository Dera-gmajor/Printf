#include "main.h"
/**
 * e - function that returns the index of the special char
 * @p: char
 * @q: pointer to array of tag
 * Return: index, otherwise NULL
 */
int e(char p, struct tag_t *q)
{
	int a = 0;

	while ((q + a)->g != '\0')
	{

		if (p == (q + a)->g)
			return (a);
		a++;
	}
	return (-1);
}

/**
 * d - funcstion that returns the index of the flag
 * @p: char
 * @q: pointer to array of struct tmp
 * Return: index, otherwise NULL
 */
int d(char p, struct tmp_t *q)
{
	int a = 0;

	while ((q + a)->g != '\0')
	{
		if (p == (q + a)->g)
			return (a);
		a++;
	}
	return (-1);
}
