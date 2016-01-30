Write a program that prompts the user for an amount in Finnish markka and converts it to euro.
Finally, the program prints the amount on the screen in euro with two decimal places of precision.
The euro conversion factor is 5.94573.

Example output:
Enter an amount in FIM:9.90
FIM converted to euro: 1.67

#include <stdio.h>

int main(void)
{
	float ex_rate = 5.94573;
	float euro;
	float markka;
	printf("Enter an amount in FIM:");
	scanf("%f", &markka);
	euro = markka / ex_rate;
	printf("FIM converted to euro: %.2f\n", euro);
}
