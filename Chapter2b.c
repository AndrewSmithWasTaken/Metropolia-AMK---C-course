Write a program that prompts the user for an integer, calculates the square and prints the result on the screen
(also print out a newline character \n after the result). After printing, the program closes itself.

Example output:
Enter an integer: 11
The square of the number you entered is 121

#include <stdio.h>

int main (void)
{
	int number;
	printf("Enter an integer:");
  	scanf("%d",&number);
	int square = number * number;
	printf("The square of the number you entered is %d\n",square);
	return 0;
}
