#include <stdio.h>
/**
* main - 4-print_alphabt.c
* Return: Allways 0
*/
int main(void)
{
	int i;

for (i = 'a'; i <= 'z' ; i++)
{
	if ((i != 'q') && (i != 'e'))
	putchar(i);
}
	putchar('\n');
	return (0);
}
