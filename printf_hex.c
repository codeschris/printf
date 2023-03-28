#include "main.h"

/**
 * printf_hex - function prints binary number
 *
 * @numarg: num args
 * @p: printed chars
 * @upper: uppercase
 *
 * Return: printed chars
 */

int printf_hex(unsigned int numarg, int p, int upper)
{
	int hex[100], i = 0, j;

	while (numarg != 0)
	{
		int rem = numarg % 10;

		if (rem < 10)
			hex[i] = 48 + rem;
		else
		{
			if (upper)
				hex[i] = 65 + (rem - 10);
			else
				hex[i] = 97 + (rem - 10);
		}
		i++;
		num /= 16;
	}
	if (i == 0)
	{
		_putchar('0');
		p++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(hex[j]);
			p++;
		}
	}
	return (p);
}
