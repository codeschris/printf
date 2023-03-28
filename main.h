#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int printf_hex(unsigned int numarg, int p, int upper);
int printf_int(va_list args, int p);
int _putchar(char c);

#endif
