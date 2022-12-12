#include <stdio.h>
/**
* main - 8-print_base16.c
* Return: Allways 0
*/
int main(void)
{
	int i;

for (i = '0' ; i <= '9' ; i++)
{
	putchar(i);
}
for (i = 'a' ; i <= 'f' ; i++)
{
	putchar(i);
}
	putchar('\n');
	return (0);
}
