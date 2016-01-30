/*Write a program that prints the text "Hello world!"
into the file "hello.usr". The file does not exist, so
it must be created. Finally, the program must print
a message on the screen indicating that writing to
the file was successful. The text printed to the file
must exactly match the assignment.

Example output:
Writing to the file was successful.
Closing the program.*/

#include <stdio.h>

int main(void)
{
	FILE* writable = fopen("hello.usr", "w");

	if (writable == NULL)
	{
	   	fclose(writable);
        		return 1;
	}

	fprintf(writable, "Hello world!\n");
	printf("Writing to the file was successful.\nClosing the program.\n");
	fclose(writable);

	return 0;
}
