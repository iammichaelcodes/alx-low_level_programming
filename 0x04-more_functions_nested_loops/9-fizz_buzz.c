#include "main.h"
/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char f= "Fizz";
	char b = "Buzz";
	char fb = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			_putchar('b');
		else if ((i % 3 == 0) && (i % 5 == 0))
			_putchar('fb');
		else if (i % 3 == 0)
			_putchar('f');
		else if (i % 5 == 0)
			_putchar('b');
		else
			_putchar((i % 10) + '0');
	}
	printf("\n");
	return (0);
}
