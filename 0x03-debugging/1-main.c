#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	/* This part cause a loop*/
	printf("Infinite loop incoming :(\n");
	i = 0;
	while (i < 10)
{
	putchar(i);
}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
