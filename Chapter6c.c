/*The program calculates the average of scores you enter.
End with a negative integer.
Enter score (4-10):7
Enter score (4-10):8
Enter score (4-10):9
Enter score (4-10):10
Enter score (4-10):4
Enter score (4-10):4
Enter score (4-10):5
Enter score (4-10):-1
You entered 7 scores.
Average score: 6.71*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	double average = 0, count = 0;
	int sum = 0;
	printf("The program calculates the average of scores you enter.\nEnd with a negative integer.\n");
	printf("Enter score (4-10):");
	int userNum;
	scanf("%d", &userNum);

	while (userNum > 3 && userNum < 11)
	{
		sum += userNum;
		count++;
		userNum = 0;
		printf("Enter score (4-10):");
		scanf("%d", &userNum);
	}

	if (userNum < 0)
	{
		printf("You entered %.6g scores.\nAverage score: %.2f\n", count, sum/count);
	}
	else
	{
		printf("You entered zero or invalid integer, this program will now fail gracefully.\n");
		return 1;
	}
	return 0;
}
