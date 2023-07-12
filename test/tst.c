#include <unistd.h>

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

int main()
{
	_putchar('#');
	_putchar('\0');
	_putchar('#');
	_putchar(48);
	_putchar(120);
	_putchar(92);
	
	return 0;
}
