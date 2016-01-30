/*Write a program that asks for the user's first and last name and saves these into
a file named by the user.

The program must start by asking for the first name. The last name is entered next,
followed by the desired file name. The first part of the file name may have a maximum
of 8 characters and the second part may have 3 (for example: personal.usr).
The file must reside in the same directory as the program.

The last name can have a maximum of 20 characters, the first name 15.

In the chapter dealing with file processing, files were opened using a string array.
Read the chapter and you should be able to perceive how to implement the program.

Example output:
The program saves your first and last name into a file.
Enter your first name:Thomas
Enter your last name:Jefferson
File where you want to save your name:personal.usr
Successfully saved the data!*/

#include <stdio.h>

int main()
{
	char firstName[16];
	char lastName[21];
	char fileName[13];
	FILE* filey;

	printf("The program saves your first and last name into a file.\nEnter your first name:");
	scanf("%s", &firstName[0]);
	printf("Enter your last name:");
	scanf("%s", &lastName[0]);
	printf("File where you want to save your name:");
	scanf("%s", &fileName[0]);
	printf("\nSuccessfully saved the data!\n");

	if ((filey = fopen(fileName, "w")) != NULL)
	{
		fprintf(filey, "%s %s\n", firstName, lastName);
		fclose(filey);
	}
	else
	{
		return 1;
	}
	return 0;
}
