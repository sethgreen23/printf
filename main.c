#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = _printf("Hello world");
	printf("[length: %d]\n", n);
	n = _printf("%c love coding", 'I');
	printf("[length: %d]\n", n);
	n = _printf("%s is great", "coding");
	printf("[length: %d]\n", n);
	n = _printf("%b\n", 5);
	printf("[length: %d]\n", n);
	n = _printf("%b\n", 0);
	printf("[length: %d]\n", n);
	n = _printf("%b\n", 98);
	printf("[length: %d]\n", n);
	n = _printf("%b\n", 124);
	printf("[length: %d]\n", n);
	n = _printf("%b\n", 25);
	printf("[length: %d]\n", n);
	return (0);
}
