Write a program that first asks the user for his/her gender and then for his/her age.
Finally, the program prints a statement in accordance with the following instructions:
Male 0 to 55 years: "You are a man in your best years!", Male 56-100 years: "You are a wise man!",
Female 0-55 years: "You are a beauty!", Female 56-100 years: "You look young for your age!",
Otherwise "An error occurred in the program!" The age shall be processed as an integer variable
and the gender as a character variable (m/f). You do not need to account for upper case letters.

Example output:
Are you male or female (m/f)?f
Enter your age:18
You are a beauty!

#include <stdio.h>

int main (void)
{
	int age;
	char sex;
	printf("Are you male or female (m/f)?");
	scanf("%c", &sex);
	printf("Enter your age:");
	scanf("%d", &age);

	if (sex == 'm' && age > -1 && age < 56)
	{
		printf("You are a man in your best years!\n");
	}
	else if (sex == 'm' && age > 55 && age < 101)
	{
		printf("You are a wise man!\n");
	}
	else if (sex == 'f' && age > -1 && age < 56)
	{
		printf("You are a beauty!\n");
	}
	else if (sex == 'f' && age > 55 && age < 101)
	{
		printf("You look young for your age!\n");
	}
	else
	{
		printf("An error occurred in the program!\n");
	}
	return 0;
}
