/*Write a program that prints all the numbers in the phone directory to the screen.
The file for reading the numbers is the same as in the previous exercise (phonedir.txt).
Upon execution, the program opens the file, reads the data and prints it.

Example output:
Brita Smith 05-4567393
Thomas Jefferson 05-6243370*/

#include <stdio.h>

int main(void)
{
	FILE* theFile;
	int count;
	char oneLine[63];

	if ( ( theFile = fopen("phonedir.txt", "r+") ) != NULL )
	{
		fscanf(theFile, "%d", &count);
		fseek(theFile, 2, SEEK_SET);

		for (int i = 1; i <= count; i++)
		{
			printf("%s", fgets(oneLine, sizeof(oneLine), theFile));
		}

		return 0;
	}
	else
	{
		return 1;
	}
}
