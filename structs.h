#ifndef STRUCTS_H
#define STRUCTS_H
typedef struct tag_t
{
	char g;
	int (*tg)(va_list, int *)
} tag;

typedef struct tmp_t
{
	char g;
	void (*tg)(int, char, int, va_list, int *);
} tmp;

#endif /* STRUCTS_H */
