Write a program that prompts the user for an integer and checks whether it is even or odd.
If the number is even, print the value 0, and if it is odd, print the value 1.

Example output:
Enter an integer: 83
The number is 1

#include <stdio.h>

int main (void)
{
	int userInt;
	printf("Enter an integer:\n");
	scanf("%d", &userInt);

	if (userInt % 2 == 0)
	{
		printf("The number is 0\n");
	}
	else
	{
		printf("The number is 1\n");
	}
}
