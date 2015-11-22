Write a program that prompts the user for an integer n (n>0) and prints the numbers 1,2,3...n
on the screen one below the other. Write the program using the FOR statement.

Example output:
Enter an integer: 3
1
2
3

#include <stdio.h>

int main(void)
{
	printf("Enter an integer: ");
	int input;
	scanf("%d", &input);
	for (int i = 1; i <= input; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}
