#include "main.h"
/**
 * print_hc - print the hexa characters
 * @n: number to be converted to hexa
 * @x: specifier
 *
 * Return: the converted hexa
 */
char print_hc(int n, char x)
{
	char strx[7] = "abcdef";
	char strX[7] = "ABCDEF";

	n -= 10;
	if (x == 'x')
		return (strx[n]);
	else
		return (strX[n]);
}

/**
 * print_hexa - print hexadecimal number
 * @lst: variadic list
 * @x: The specifier
 *
 * Return: count
 */
int print_hexa(va_list lst, char x)
{
	int i, count, j, temp;
	char buffer[100];
	unsigned int n = va_arg(lst, int);

	i = 0, count = 0;
	do {
		if (n % 16 > 9)
			buffer[i++] = print_hc(n % 16, x);
		else
			buffer[i++] = n % 16 + '0';
		count++;
		n /= 16;
	} while (n > 0);
	buffer[i] = '\0';
	for (j = 0; j < i / 2; j++)
	{
		temp = buffer[j];
		buffer[j] = buffer[i - j - 1];
		buffer[i - j - 1] = temp;
	}
	for (j = 0; buffer[j] != '\0'; j++)
	{
		write(1, &buffer[j], 1);
	}
	return (count);
}
