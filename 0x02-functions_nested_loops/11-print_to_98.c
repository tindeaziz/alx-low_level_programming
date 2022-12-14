#include <stdio.h>
/**
 * print_to_98 - code
 * @c: The number to begin counting at.
*/
void print_to_98(int c)
{
if (c >= 98)
{
	while (c > 98)
		printf("%d, ", c--);
		printf("%d\c", c);
}
else
{
	while (c < 98)
		printf("%d, ", c++);
		printf("%d\c", c);
}
}
