#include "main.h"
/**
*  print_alphabet - fonctiion write
*
* Return: Allways 0
*/

void print_alphabet(void)
{
	int i;

for (i = 'a' ; i <= 'z' ; i++)
{
	_putchar(i);
	if (i == 'z')
		_putchar('\n');
}
}
