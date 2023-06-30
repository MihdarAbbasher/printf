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
	int i = 0;

	while (1 == 1)
	{
		if (*(s + i) != '\0')
		{
			i += 1;
		}
		else
		{
			break;
		}
	}
	return (i);
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
	int l, i;

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
				status = 1;
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
				c = va_arg(ap, int);
				_putchar(c);
				res++;
			}
			else if (c == 's')
			{
				s = va_arg(ap, char*);
				c = *s;
				j = 0;
				while (c)
				{
					_putchar(c);
					res++;
					j++;
					c = *(s + j);
				}
			}
			else if (c == 'd' || c == 'i')
			{
				c = va_arg(ap, int);
				_putchar(c);
				res++;
			}
			status = 0;
		}
	}
	va_end(ap);
	printf("res: %d\n", res);
	return (res);
}
