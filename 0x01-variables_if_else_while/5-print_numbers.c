#include <stdio.h>
/**
 * main - prog Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++) 
		printchar("%d", a);
	putchar('\n');
	return (0);
}
