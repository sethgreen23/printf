#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_s(char *str);
int _strlen(char *s);
int print_d(int n);
int print_b(int n);
int choose_func(char ch, va_list lst);
int print_percent(int num);
int print_ns(char ch);
int print_char(va_list lst);
#endif
