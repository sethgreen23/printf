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
	char *str_clone;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str = va_arg(lst, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	str_clone = str;
	for (; *str_clone != '\0'; ++str_clone)
	{
		for (i = 0; input[i] != '\0'; ++i)
		{
			if (input[i] == *str_clone)
			{
				*str_clone = output[i];
				break;
			}
		}
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		len++;
	}
	return (len);
}
