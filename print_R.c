#include "main.h"
/**
 * print_R - print rot13
 * @lst: variadic list
 *
 * Return: number of character
 */
int print_R(va_list lst)
{
	int i, ii, len = 0;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str = va_arg(lst, char *);
	
	if (str = NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (ii = 0; ii < 54; ii++)
		{
			if (((str[i] <= 'z' && str[i] >= 'a') ||
				(str[i] <= 'Z' && str[i] >= 'A')) && str[i] == input[ii])
			{
				str[i] = output[ii];
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
