#include <stdio.h>

/**
  * main - Entry point of the calculator
  * Return: Always 0
  */

int main(void)
{
	unsigned int a, b;
	int operators;

	printf("Give me two numbers: ");
	scanf("%u %u", &a, &b);
	printf("Pick one arithmetic operator [1 for +, 2 for -, 3 for *, 4 for /]");
	printf("Enter your option: ");
	scanf("%d", &operators);


	switch (operators)
	{
	case 1:
		operators = a + b;
		printf("The sum is: %u + %u = %d\n", a, b, operators);
		break;
	case 2:
		operators = a - b;
		printf("The subtraction is: %u - %u = %d\n", a, b, operators);
		break;
	case 3:
		operators = a * b;
		printf("The multiplication is: %u * %u = %d\n", a, b, operators);
		break;
	case 4:
		operators = a / b;
		printf("The division is: %u / %u = %d\n", a, b, operators);
		break;
	default:
		printf("Invalid input\n");
	}
	return (0);
}
