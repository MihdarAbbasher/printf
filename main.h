#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct format - Struct for format
 * @specifiers: Struct format
 * @f: The function associated
 */

typedef struct specifiers
{
	char specifier_char;
	int (*func)(va_list);
} specifiers_t;

int _putchar(char c);
int _printf(const char *format, ...);
int handle_print(char s, va_list item);
int print_char(va_list item);
int print_string(va_list item);
int print_modular(va_list item);
int print_digit(va_list item);
int print_binary(va_list item);

#endif
