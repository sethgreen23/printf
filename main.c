#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = _printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");
	printf("%d\n", n);
	n = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");
	printf("%d\n", n);
	n = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "");
	printf("%d\n", n);
	return (0);
}
