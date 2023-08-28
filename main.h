#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct tag_t - Structure to represent a tag and its handler function
 * @g: The tag character
 * @tg: Pointer to the handler function
 */
typedef struct tag_t
{
	char g;
	int (*tg)(va_list, int *);
} tag;

/**
 * struct tmp_t - Structure to represent temporary data
 * @g: The temporary character
 * @tg: Pointer to the handler function
 */
typedef struct tmp_t
{
	char g;
	void (*tg)(int, char, int *, va_list, int);
} tmp;

int _printf(const char *format, ...);
int stringlength(char *str);
int _putchar(char put);
void tag_tr(const char *format, int *a, struct tag_t *q, int *sn, va_list t);
int _print_hexa_upper(int *sn, va_list t);
void space_sn(int s, char c, int *sn, va_list u, int b);
void window_sn(int s, char c, int *sn, va_list u, int b);
void postive_sn(int s, char c, int *sn, va_list u, int b);
int d(char p, struct tmp_t *q);
int e(char p, struct tag_t *q);
void _integer(unsigned int a, int *sn);
int strings(char *s, int l);
int _print_char(va_list t, int *sn);
int _print_strings(va_list t, int *sn);
int _print_pointer(va_list t, int *sn);
int _print_hex(unsigned long int ab, int *sn);
int upper_hexa(int n, int *sn);
int _print_non_printable(va_list t, int *sn);
int _print_binary(va_list t, __attribute__((unused)) int *sn);
int _print_hexa_lower(va_list t, int *sn);
int _print_octal(va_list t, int *sn);
int _print_reverse(va_list t, int *sn);
int _print_rot13(va_list t, int *sn);
int _print_unsignedint(va_list t, int *sn);
int _print_integer(va_list t, int *sn);
#endif
