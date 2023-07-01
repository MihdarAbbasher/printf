#include "main.h"

/**
 * handle_print - function specifiers.
 *
 * @spec_char: Conversion specifiers.
 * @item: arguments.
 *
 * Return: char count.
 */

int handle_print(char spec_char, va_list item)
{
	int i = 0;
	int count_fun = 0;

	specifiers_t spec_array[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_modular},
		{0, NULL}
	};

	while (spec_array[i].specifier_char)
	{
		if (spec_char == spec_array[i].specifier_char)
			count_fun += spec_array[i].func(item);
		i++;
	}

	if (count_fun == 0)
	{
		count_fun += _putchar('%');
		count_fun += _putchar(spec_char);
	}

	return (count_fun);
}
