Write a program that prompts the user for an integer n (n>0) and prints the factorial of the number on the screen.
For example, the factorial of n is designated n!, which means the number calculated as follows: 1*2*3...*n

Example output:
Enter an integer: 3
The factorial of 3 is 6

#include <stdio.h>

int main (void)
{
	int userInt;
	int factorial = 1;

	printf("Enter an integer: ");
	scanf("%d", &userInt);

	for (int i = userInt; i >=2; i--)
	{
		factorial = factorial * i;
	}

	printf("The factorial of %d is %d\n", userInt, factorial);
	return 0;
}
