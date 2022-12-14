#include "main.h"
/**
* _islower - Lower check caracter
* @c: variable
* Return: 0 or 1
*/

int _islower(int c)
{
	int i;

for (i = 'a' ; i <= 'z' ; i++)
{
	if (i == c)
		return (1);
	else if (i != c)
		return (0);
}
	return (4);
}
