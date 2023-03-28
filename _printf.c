#include "main.h"

/**
 * _printf - function gives output according
 * to the input in format
 *
 * @format: input characters
 * @...: other parameters
 *
 * Return: ptr to format
 */

int _printf(const char *format, ...)
{
	int p = 0;

	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			p = selector(format, args, p);
		}
		else
		{
			_putchar(*format);
			p++;
			format++;
		}
	}
	va_end(args);
	return (p);
}
