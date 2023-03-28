#include "main.h"

/**
 * printf_char - function prints characters
 *
 * @args: given arguments
 * @p: printed char
 *
 * Return: printed char
 */

int printf_char(va_list args, int p)
{
	int s = va_arg(args, int);

	_putchar(s);
	return (p + 1);
}
