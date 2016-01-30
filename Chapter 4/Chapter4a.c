Write a program that prompts the user for two integers and prints the sum, difference and product of the numbers on the screen.

Example output:
Enter the first number:83
Enter the second number:78
83+78=161
83-78=5
83*78=6474

#include <stdio.h>

int main (void)
{
	int num1;
	int num2;
	printf("Enter the first number:\n");
	scanf("%d", &num1);
	printf("Enter the second number:\n");
	scanf("%d", &num2);
	printf("%d+%d=%d\n", num1, num2, num1+num2);
	printf("%d-%d=%d\n", num1, num2, num1-num2);
	printf("%d*%d=%d\n", num1, num2, num1*num2);
}
