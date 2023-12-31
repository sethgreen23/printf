#include "main.h"
/**
 * print_o - print octal number
 * @n: Unsigned decimal
 *
 * Return: count
 */
int print_o(unsigned int n)
{
	int i, count, j, temp;
	char buffer[100];

	i = 0, count = 0;
	do {
		buffer[i++] = n % 8 + '0';
		count++;
		n /= 8;
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

/**
 * print_u - print unsigned number
 * @n: decimal number
 *
 * Return: number of digits
 */
unsigned int print_u(int n)
{
	unsigned int maxValue = 4294967295;
	unsigned int value;
	int i, j, temp;
	char buffer[32];

	i = 0;
	if (n < 0)
		value = maxValue + n + 1;
	else if (n >= 0)
		value = n;
	do {
		buffer[i++] = value % 10 + '0';
		value = value / 10;
	} while (value > 0);
	for (j = 0; j < i / 2; j++)
	{
		temp = buffer[i - j - 1];
		buffer[i - j - 1] = buffer[j];
		buffer[j] = temp;
	}
	for (j = 0; j < i; j++)
		write(1, &buffer[j], 1);
	return (i);
}
