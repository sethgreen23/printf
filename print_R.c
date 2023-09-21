#include "main.h"
/**
 * print_R - print rot13
 * @lst: variadic list
 *
 * Return: number of character
 */
int print_R(va_list lst)
{
	int i, len = 0;
	char *str = va_arg(lst, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			putchar(str[i] + 13);
			len++;
		}
		else if (str[i] >= 'n' && str[i] <= 'z')
		{
			putchar(str[i] - 13);
			len++;
		}
		else if (str[i] >= 'N' && str[i] <= 'Z')
		{
			putchar(str[i] - 13);
			len++;
		}
		else
		{
			putchar(str[i]);
			len++;
		}
	}
	return (len);
}
