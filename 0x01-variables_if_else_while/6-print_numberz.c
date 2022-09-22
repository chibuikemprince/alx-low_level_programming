#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int low;

	for (low = '0'; low <= '9'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
