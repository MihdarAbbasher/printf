#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	len = _printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	len2 = printf("\\x01\\x02\\x03\\x04\\x05\\x06\\x07");
	if (len != len2)
	{
		printf("len differ\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
