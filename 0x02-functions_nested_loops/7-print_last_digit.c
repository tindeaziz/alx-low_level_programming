#include "main.h"
/**
* print_last_digit - Last digit code
* @c: input
* Return: Allways 0
*/

int print_last_digit(int x) 
{
	int n;
	n  = x % 10;
	if (x < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
