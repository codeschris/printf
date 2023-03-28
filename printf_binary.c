#include "main.h"

/**
 * printf_binary - function prints a binary number
 *
 * @numarg: number args
 * @p: printed chars
 *
 * Return: printed chars
 */

int printf_binary(unsigned int numarg, int p)
{
	int binary[32] = {0};
	int n = 0;

	if (numarg == 0)
	{
		_putchar('0');
		p++;
		return (p);
	}

	while (numarg > 0)
	{
		binary[i] = numarg % 2;
		numarg /= 2;
		n++;
	}

	while (n > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		p++;
	}
	return (p);
}
