/*Write a program that calculates the number
of hours worked within a specific period and
prints the total number of hours, the average
length of a day and an itemisation of the hours
entered. First, the program must ask how many
days of working hours shall be entered
(max 30 days). After this, the program asks
for the daily working hours. The program
output shall have one decimal place of precision.

The program calculates the total hours worked during
a specific period and the average length of a day.

How many days:3
Enter the working hours for day 1:5.5
Enter the working hours for day 2:6.6
Enter the working hours for day 3:7.7

Total hours worked: 19.8
Average length of day: 6.6
Hours entered: 5.5 6.6 7.7 */

#include <stdio.h>

int main (void)
{
	printf("The program calculates the total hours worked during\na specific period and the average length of a day.\n");

	double usrIn[30];
	double numDays;
	double numHrs;
	double aveLen = numHrs / numDays;

	printf("How many days: ");
	scanf("%lf", &numDays);
	for (int i = 0; i < numDays; i++)
	{
		printf("Enter the working hours for day %d: ", i + 1);
		scanf("%lf", &usrIn[i]);
		numHrs += usrIn[i];
	}

	printf("Total hours worked: %.1f\n", numHrs);
	printf("Average length of day: %.1f\n", aveLen);
	printf("Hours entered: ");
	for (int i = 0; i < numDays; ++i)
	{
		printf("%.1f ", usrIn[i]);
	}
}
