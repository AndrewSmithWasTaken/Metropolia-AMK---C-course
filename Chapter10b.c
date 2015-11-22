/*Write a program that prompts the user for a word (max 15 lower-case letters)
and calculates the number of vowels (a, e, i, o, u, y) in the word.

Example output:
The program calculates the number of vowels.
Enter a word:test
The word contains 1 vowels.*/

#include <stdio.h>

int main(void)
{
	char userWord[16];
	int vowelCount = 0;

	printf("The program calculates the number of vowels.\nEnter a word:");
	scanf("%s", &userWord[0]);

	for (int i = 0; i < 16; i++)
	{
		if (userWord[i] == 'a' || userWord[i] == 'e' || userWord[i] == 'i' || userWord[i] == 'o' || userWord[i] == 'u')
		{
			vowelCount ++;
		}
	}

	printf("The word contains %d vowels.\n", vowelCount);
	return 0;
}
