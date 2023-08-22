#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct tag - struct to use
 * @g: ..
 * @tg: pointer
 */
typedef struct tag_t;
{
	char g;
	int (*tg)(va_list, int *);
} tag;

/**
 * struct tmp - struct to use
 * @g: ...
 * @tg: pointer
 */
typedef struct tmp_t;
{
	char g;
	void (*tg)(int, char, int, va_list, int *);
} tmp;

int _printf(const char *format, ...);
int stringlength(char *str);
int _putchar(char put);
int _print_hexa_upper(int *n, va_list dx);
void space_sn(int a, char c, int *sn);
void window_sn(int a, char c, int *sn);
void postive_sn(int a, char c, int *sn);
int d(char p, struct tmp *q);
int e(char p, struct tag *q);
void _integer(unsigned int a, int *sn);
