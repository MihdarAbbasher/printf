#include "main.h"
#include <unistd.h>


/**
 * print_int_as_hex_upper - print a
 * @c: int last update
 * Return: int
 */

int print_int_as_hex_upper(int c)
{
	int  i = 0, j, temp;
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
	{
		if (arr[j] >= 48 && arr[j] <= 57)
			i += _putchar(48);
		_putchar(arr[j]);
	}
	return (i);
}


/**
 * print_special_chars - print S str.
 *
 * @args: argument.
 *
 * Return: count of chars.
 */

int print_special_chars(va_list args)
{
	int count, i, index;
	char *str;

	count = 0;
	str = va_arg(args, char *);
	if (!str)
	{
		str = "(null)";
		while (str[count])
		{
			_putchar(str[count]);
			count++;
		}
		return (count);
	}
	index = 0;
	while (str[index])
	{
		i = str[index];
		if (i < 32 || i >= 127)
		{
			count += _putchar(92);
			count += _putchar(120);
			count += print_int_as_hex_upper(i);
		}
		else
		{
			count += _putchar(i);
		}
		index++;
	}

	return (count);
}

