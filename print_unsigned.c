#include "main.h"


/**
 * print_num_recurssion - prints an integer recursively
 * @n: Integer
 */

void print_num_recurssion(int n)
{
	unsigned int num = n;

	if (num / 10)
		print_num_recurssion(num / 10);

	_putchar('0' + num % 10);
}

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

	print_num_recurssion(num);
	return (count);
}
