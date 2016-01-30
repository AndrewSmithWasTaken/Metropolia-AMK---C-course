Write a program that prompts the user for an integer and checks whether it is even or odd.
If the number is even, print "Number 2 is even.", if it is odd, print "Number 1 is odd.".

#include <stdio.h>

int main (void)
{
	int userInt;
	printf("Enter an integer:\n");
	scanf("%d", &userInt);

	if (userInt % 2 == 0)
	{
		printf("Number 2 is even.\n");
	}
	else if (userInt % 2 == 1)
	{
		printf("Number 1 is odd.\n");
	}
	else
	{
		printf("Error!");
	}
}
