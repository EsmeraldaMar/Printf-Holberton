#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdarg.h>
#include <stdio.h>
/**
 * struct print_struct - struct to print args
 * @op: operator
 * @f: Pointer to function to call
 */
typedef struct print_struct
{
	char *op;
	void (*f)();
} print_t;
#endif
