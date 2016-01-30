Write a program that first asks the user for an integer and after that, a floating-point number.
Finally, the program prints both numbers on the screen. The floating-point number shall be
printed with two decimal places of precision.

Example output:
Enter an integer: 14
Enter a decimal number:3.123
You entered the integer: 14
You entered the decimal number, rounded to two decimal places: 3.12

#include <stdio.h>

int main (void)
{
	int user_int;
	float user_float;
	printf("Enter an integer: ");
	scanf("%d", &user_int);
	printf("Enter a decimal number: ");
	scanf("%f", &user_float);
	printf("You entered the integer: %d\n", user_int);
	printf("You entered the decimal number, rounded to two decimal places: %.2f\n", user_float);
}
