#include "main.h"
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
	int character;

	printed = 0;
	va_start(lst, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			printed++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				write(1, format, 1);
				printed++;
			}
			else if (*format == 'c')
			{
				character = va_arg(lst, int);
				if (character == '\0')
					return (-1);
				write(1, &character, 1);
				printed++;
			}
			else if (*format == 's')
			{
				printed += print_s(va_arg(lst, char *));
			}
		}
		format++;
	}
	va_end(lst);
	return (printed);
}
