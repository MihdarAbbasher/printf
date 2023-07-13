#include "main.h"
#include <unistd.h>
/**
 * _printf - Emulate the original.
 * _printf("this is str: %s", mystring);
 * @format: Format by specifier.
 *
 * Return: count of chars.
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, tmp_count;
	va_list item;

	va_start(item, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[i])
	{
		tmp_count = 0;
		if (format[i] == '%')
		{
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
			{
				count = -1;
				break;
			}
			tmp_count += handle_print(format[i + 1], item);
			if (tmp_count == -1)
				return (-1);
			else if (tmp_count == 0)
				count += 0;
			i++;
		}
		else
		{
			(count == -1) ? (_putchar(format[i])) : (count += _putchar(format[i]));
		}
		i++;
		if (count != -1)
			count += tmp_count;
	}
	va_end(item);
	return (count);
}
