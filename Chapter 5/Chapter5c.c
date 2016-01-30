Write a simple calculator program that calculates the difference, sum or product of two numbers.
First, the program asks which calculation to perform. After this, the program prompts for the numbers,
performs the calculation and prints the result. The selection within the program has to be done using a switch() statement.

Example output:
1: subtraction
2: addition
3: multiplication
Select function:3
Enter the first number:45
Enter the second number:67
45*67=3015

#include <stdio.h>

int main (void)
{
	int function;
	int num1;
	int num2;

	printf("1: subtraction\n");
	printf("2: addition\n");
	printf("3: multiplication\n");
	printf("Select function:");
	scanf("%d", &function);
	printf("Enter the first number:");
	scanf("%d", &num1);
	printf("Enter the second number:");
	scanf("%d", &num2);

	int f1 = num1 - num2;
	int f2 = num1 + num2;
	int f3 = num1 * num2;

	switch (function)
	{
		case 1 :
			printf("%d-%d=%d\n", num1, num2, f1);
			break;
		case 2 :
			printf("%d+%d=%d\n", num1, num2, f2);
			break;
		case 3 :
			printf("%d*%d=%d\n", num1, num2, f3);
			break;
	}
	return 0;
}
