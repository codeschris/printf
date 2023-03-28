#include "main.h"

/**
 * printf_str - function prints a given string
 *
 * @args: number of arguments
 * @p: printed char
 *
 * Return: printed char
 */

int printf_str(va_list args, int p)
{
	char *str = va_arg(args, char *);

	while (*stringg == '\0')
	{
		_putchar(*string);
		p++;
		str++;
	}
	return (p);
}
