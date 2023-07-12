#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _printf("Unsigned secial: %S\n", "\x1F\n\x03");
	printf("len: %i\n", len);
	len = _printf("Unsigned secial: %S\n", "\x1F\n\x03");
	return (0);
}
