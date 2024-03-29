#include "main.h"
#include <unistd.h>


/**
 * print_int_as_hex_upper - print a
 * @c: int
 * Return: int
 */

int print_int_as_hex_upper(int c)
{
	int  i, j, temp, count;
	int arr[128];

	if (c == 0)
		return (_putchar('0'));

	i = 0;
	count =0;
	if (c < 16)
		count += _putchar(48);
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
		count++;
	}
	return (count);
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
	char *str, *str2;

	count = 0;
	str = va_arg(args, char *);
	str2 = "";
	if (*str == *str2)
	{
		return (0);
	}
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

