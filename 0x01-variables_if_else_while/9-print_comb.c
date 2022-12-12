#include <stdio.h>
/**
* main - 9-print_comb.c
* Return: Allways 0
*/
int main(void)
{
	int i;

for (i = '0' ; i <= '9' ; i++)
{
	putchar(i);
	if (i != '9')
{
		putchar(',');
		putchar(' ');
}
}
	putchar('\n');
	return (0);
}
