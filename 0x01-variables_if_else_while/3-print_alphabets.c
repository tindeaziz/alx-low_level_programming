#include <stdio.h>
/**
* main - 3-print_alphabets.c
* Return: Allways 0
*/
int main(void)
{
	int i;

for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
}
for (i = 'A'; i <= 'Z'; i++)
{
	putchar(i);
}
	putchar('\n');
	return (0);
}
