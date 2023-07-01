#include "main.h"
#include <unistd.h>

/**
 * print_digit - print integers.
 *
 * @args: argument.
 *
 * Return: count of chars.
 */

int print_digit(va_list args)
{
	int decimal = 1;
	int count = 0;
	long int digit = va_arg(args, int);
	long int digitaux;

	if (digit < 0)
	{
		count += _putchar('-');
		digit *= -1;
	}

	if (digit < 10)
		return (count += _putchar(digit + '0'));

	digitaux = digit;

	while (digitaux > 9)
	{
		decimal *= 10;
		digitaux /= 10;
	}
	while (decimal >= 1)
	{
		count += _putchar(((digit / decimal) % 10) + '0');
		decimal /= 10;
	}

	return (count);
}

