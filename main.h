#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct convert - struct for print function
 * @fmt: index
 * @print: pointer for print function
 *
 * Description: stores pointers
 */

typedef struct pt_fmt
{
	char *fmt;
	int (*print)(va_list valist);
} pt_fmt;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);

#endif
