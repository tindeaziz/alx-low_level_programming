#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers
 * Return: Always 0.
*/
int main(void)
{
	int cnt;
	unsigned long a = 0, b = 1, sum;

	for (cnt = 0; cnt < 50; cnt++)
	{
		sum = a + b;
		printf("%lu", sum);
		a = b;
		b = sum;
		if (cnt == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
