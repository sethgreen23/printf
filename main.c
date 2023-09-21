#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = _printf("%S", "No special character."); 
	printf("\n%d\n", n);
	n = _printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	printf("\n%d\n", n);
	n = _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	printf("%d\n", n);
	return (0);
}
