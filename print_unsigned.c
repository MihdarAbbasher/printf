#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @item: Integer
 * Return: int
 */

int print_unsigned(va_list item)
{
	unsigned int n = va_arg(item, int);
	long int count = 1, num = n;

	while (n > 9)
		n /= 10,
		count++;

	print_num_rec(num);
	return (count);
}
