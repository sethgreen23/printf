#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = _printf("%R", "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	printf("\n%d\n", n);
	n = _printf("%R", "nopqrstuvwxyzabcdefghijklm");
	printf("\n%d\n", n);
	n = _printf("%R", "65123945");
	printf("\n%d\n", n);
	return (0);
}
