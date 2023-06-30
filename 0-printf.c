#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _strlen(char *s)- check the co
 * @s: char pointer
 * Return: int len
*/
int _strlen(const char *s)
{
	int res;
	
	while (s[res])
		res++;
	return (res);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - this function prints a str
 *@str: this parameter is the str
 * Return: size of str.
*/
int _puts(const char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
	{
		_putchar(str[size]);
		size++;
	}
	return (size);
}

/* betty style doc for function main goes there */
/**
* _printf - print the alphabet
* @format: char ptr
* Return: int
*/
int _printf(const char *format, ...)
{
	int res, j, status;
	va_list ap;
	char c, *s;
	int l, i, int_c;

	status = 0;
	l = _strlen(format);
	res = 0;
	va_start(ap, format);
	for (i = 0; i < l; i++)
	{
		c = format[i];
		if (status == 0)
		{
			if (c == '%')
			{
				status = 1;
			}
			else
			{
				_putchar(c);
				res++;
			}
		}
		else
		{
			if (c == '%')
			{
				_putchar(c);
				res++;
			}
			else if (c == 'c')
			{
				int_c = va_arg(ap, int);
				_putchar(int_c);
				res++;
			}
			else if (c == 's')
			{
				s = va_arg(ap, char*);
				j = _puts(s);
				res += j;
			}
			status = 0;
		}
	}
	va_end(ap);
	return (res);
}
