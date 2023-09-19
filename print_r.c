#include "main.h"
/**
 * print_r - print string on reverse
 * @lst: variadic list
 *
 * Return: string length
 */
int print_r(va_list lst)
{
	int len, j;
	char *str = va_arg(lst, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = _strlen(str);
	for (j = len - 1; j >= 0; j--)
		write(1, &str[j], 1);
	return (len);
}
