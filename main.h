#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct print_struct - struct to print args
 * @op: operator
 * @f: Pointer to function to call
 */
typedef struct print_struct
{
	char *op;
	int (*f)();
} print_t;
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list box);
int printf_string(va_list box);
#endif
