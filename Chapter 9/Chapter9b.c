/*The file "numbers.s" contains 4 integers.
The numbers are on the first line of the file,
 separated by spaces. Write a program
 that reads the integers from the file and
 calculates their sum. Finally, the program
 prints the numbers and the sum on the screen.

Example output:
Numbers found in the file numbers.s:
93, 432, 65 and 22

Sum of the numbers: 612*/

#include <stdio.h>

int main(void)
{
	FILE* numbers;
	float usrVals[4];
	float valsSum = 0;

	if (  (numbers = fopen("numbers.s", "r") ) == NULL)
	{
		fclose(numbers);
		return 1;
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			fscanf(numbers, "%f", &usrVals[i]);
			valsSum += usrVals[i];
		}
		printf("Numbers found in the file numbers.s:\n%.f, %.f, %.f and %.f\n\nSum of the numbers: %.f\n", usrVals[0], usrVals[1], usrVals[2], usrVals[3], valsSum);
		fclose(numbers);
	}
	return 0;
}
