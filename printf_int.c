#include "main.h"

/**
 * printf_int - function prints integers
 *
 * @args: present arguments
 * @p: printed characters
 *
 * Return: printed chars
 */

int printf_int(va_list args, int p)
{
	int x = va_arg(args, int);
	int i = 0;
	int tmp;
	int n;

	if (x < 0)
	{
		p += _putchar('-');
		x = -x;
		tmp = x;
	}

	while (tmp != 0)
	{
		i++;
		tmp /= 10;
	}

	while (i > 0)
	{
		int power = 1;
		int a = 0;

		for (; a < i; a++)
			power *= 10;

		n = x / power;
		p += _putchar(n + '0');
		x -= n * power;
		i--;
	}
	return (p);
}
