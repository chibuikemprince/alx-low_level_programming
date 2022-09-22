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
	char low2;

	for (low = '0'; low <= '9'; low++)
		putchar(low);
	for (low2 = 'a'; low2 <= 'f'; low2++)
		putchar(low2);
	putchar('\n');
	return (0);
}
