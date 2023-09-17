#include "main.h"

/**
 * choose_func - choose the specifier
 * @ch: specifier
 * @lst: list of arguments
 *
 * Return: Number of characters printed
 */
int choose_func(char ch, va_list lst)
{
	int printed = 0;

	if (ch == '%')
		printed = print_percent(1);
	else if (char == 'c')
		printed = print_char(lst);
	else if (ch == 's')
		printed = print_s(va_arg(lst, int *));
	else
		printed = print_ns(ch);
	return (printed);
}

/**
 * _printf - printf function
 * @format: format string
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int printed;
	va_list lst;
	char character;

	printed = 0;
	va_start(lst, format);
	if (format == NULL || *format == '\0')
		return (-1);
	for (; *format; format++)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			printed++;
		}
		else
		{
			format++;
			len = 0;
			len = choose_func(*format, lst);
			if (len < 0)
				return (-1);
			printed += len;
		}
	}
	va_end(lst);
	return (printed);
}
