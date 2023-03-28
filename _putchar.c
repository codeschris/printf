#include "main.h"

/**
 * _putchar - function prints char
 *
 * @c: input character
 *
 * Return: 1 Success, -1 Error
 */

int _putchar(char c)
{
	return (buffer_write(c, 0));
}

/**
 * mem_set - function fills string with given char
 *
 * @str: input string
 * @n: input len
 * @c: char to add
 */

void mem_set(char *str, int n, char c)
{
	int i = 0;

	for (; str != NULL && i < n; i++)
		*(str + i) = c;
}

/**
 * buffer_write - function writes char to the buffer
 *
 * @c: char to write
 * @x: action to be done
 *
 * Return: 1 (Success)
 */

int buffer_write(char c, char x)
{
	static int i;
	static int char_count;
	static char buffer[1024];
	static char o;

	if (i < 1024 && x == 0)
	{
		o = char_count < 1 ? 1 : o;
		buffer[i] = c;
		i++;
		char_count++;
	}
	if (i >= 1024 || x == 1)
	{
		o = write(1, buffer, i);
		fflush(stdout);
		i = 0;
		mem_set(buffer, 1024, 0);
	}
	if (x == -1)
	{
		i = 0;
		char_count = 0;
		mem_set(buffer, 1024, 0);
	}
	if (x == -2)
	{
		return (char_count);
	}
	return (o);
}
