#include "main.h"
#include <unistd.h>


/**
 * print_int_as_hex_upper - print a
 * @c: int
 * Return: int
 */

int print_int_as_hex_upper(int c)
{
	int  i = 0, j, temp = 0;
	int arr[128];

	if (c == 0)
		return (_putchar('0'));

	if (c < 16)
		_putchar(48);
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
		_putchar(arr[j]);
	}
	return (i);
}


/**
 * print_special_chars - print S str.
 *
 * @args: argument valist.
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

