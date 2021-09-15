#include <stdio.h>
#include <stdlib.h>
#include "8-fz_bz_modulable_H.h"
/**
 * main - entry point
 * Return: returns 0 succsess
 */
int main(void)
{
	int i;
	int first_multiple, second_multiple;

	printf("___________________________________________\n");
	printf("		FizzBuzz\n");
	printf("-------------------------------------------\n");
	while (1)
	{
		printf("give a value for the first multiple or type \"0\" to quit.\n");
		printf("$> ");
		scanf("%d", &first_multiple);
		if (first_multiple == 0)
			exit(0);

		printf("give a value for the second multiple or type \"0\" to quit.\n");
		printf("$> ");
		scanf("%d", &second_multiple);
		if (second_multiple == 0)
			exit(0);

		printf("Print a list of number from 1 and exchange:\n");
		printf("	- multiple of %d by Fizz\n", first_multiple);
		printf("	- multiple of %d by Buzz\n", second_multiple);
		printf("	- multiple of %d and %d by FizzBuzz\n", first_multiple, second_multiple);

		printf("Enter a Max value or type \"0\" to quit.\n");
		printf("$> ");
		scanf("%d", &i);
		if (i == 0)
			break;
		fizbuz(i, first_multiple, second_multiple);
		printf("\n");
	}
	return (0);
}

/**
 * fizbuz - print a list of number, change a chosen multiple by Fizz
 * change an other chosen multiple by Buzz, if the number is a multiple of
 * both chosen print FizzBuzz
 * @j: number max of the list of int
 * @first: first multiple to choose
 * @second: second multiple
 * Return: nothing void
 */
void fizbuz(int j, int first, int second)
{
	int i;

	for (i = 1; i <= j; i++)
	{
		if (i % second == 0 && i % first == 0)
			printf("FizzBuzz");
		else if (i % second == 0)
			printf("Fizz");
		else if (i % first == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < j)
			printf(", ");
	}
	printf(".\n");
}

