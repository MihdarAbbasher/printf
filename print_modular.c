#include "main.h"
#include <unistd.h>

/**
 * print_modular - print %.
 *
 * @item: va_list argument.
 *
 * Return: 1.
 */

int print_modular(va_list item)
{
	(void)item;
	_putchar('%');
	return (1);
}
