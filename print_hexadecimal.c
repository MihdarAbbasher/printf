#include "main.h"

/**
 * print_hexadecimal_lower - print hexadecimal number
 * @item: unsigned int
 * Return: int
 */

int print_hexadecimal_lower(va_list item)
{
	unsigned int c = va_arg(item, unsigned int);
	int  i = 0, j, temp = 0;
	int arr[128];

	if (c == 0)
		return (_putchar('0'));

	while (c != 0)
	{
		temp = c % 16;
		if (temp < 10)
			arr[i] = 48 + temp;
		else
			arr[i] = 87 + temp;
		c /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i);
}

/**
 * print_hexadecimal_upper - print a
 * @item: unsigned int
 * Return: int
 */

int print_hexadecimal_upper(va_list item)
{
	unsigned int c = va_arg(item, unsigned int);
	int  i = 0, j, temp = 0;
	int arr[128];

	if (c == 0)
		return (_putchar('0'));

	while (c != 0)
	{
		temp = c % 16;
		if (temp < 10)
			arr[i] = 48 + temp;
		else
			arr[i] = 55 + temp;
		c /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);

	return (i);
}

