#include "main.h"

/**
 * selector - selects the appropriate specifiers
 * @args: number of arguements
 * @printed: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */

int selector(const char *format, va_list args, int p)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			p = printf_int(args, p);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			p++;
			break;
		case 's':
			p = printf_str(args, p);
			break;
		case '%':
			_putchar('%');
			p++;
			break;
		case 'b':
			p = printf_binary(va_arg(args, unsigned int), p);
			break;
		case 'x':
		case 'X':
			p = printf_hex(va_arg(args, unsigned int), p, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			p = printf_octal(va_arg(args, unsigned int), p);
			break;
		case 'u':
			p = printf_unsigned(va_arg(args, unsigned int), p);
			break;
		case 'r':
			p = printf_reverse(args, p);
			break;
		case 'p':
			p = printf_ptr(args, p);
			break;
		default:
			break;
	}
	return (p);
}
