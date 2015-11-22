/*Enter first name:Tim
Enter last name:Franklin
Data removed from the directory.

The strcmp function compares the string s1 against s2, returning a value that has the same sign
as the difference between the first differing pair of characters (interpreted as unsigned char objects, then promoted to int).
If the two strings are equal, strcmp returns 0.
int strcmp (const char *s1, const char *s2)*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct person
{
  char firstName[21];
  char lastName[21];
  char phone[21];
};

int main(void)
{
      struct person personArray[50];
      FILE* theFile;
      int count;
      const char* fileName = "phonedir.txt";
      char first[21], last[21];

	if ( ( theFile = fopen(fileName, "r") ) != NULL )
	{
            fscanf(theFile, "%d", &count);

            for (int i = 0; i < count; i++)
            {
                    fscanf(theFile, "%s%s%s", personArray[i].firstName, personArray[i].lastName, personArray[i].phone);
            }
            fclose(theFile);
	}
      else
      {
            return 1;
      }

      printf("Enter first name:");
      scanf("%s", &first[0]);
      printf("Enter last name:");
      scanf("%s", &last[0]);
      bool deleted;

      if ( ( theFile = fopen(fileName, "w") ) != NULL )
      {
            fprintf(theFile, "%d\n", count);
            for (int i = 0; i < count; i++)
            {
                     if ( strcmp(first, personArray[i].firstName)  != 0  )
                      {
                            fprintf(theFile, "%s %s %s\n", personArray[i].firstName, personArray[i].lastName, personArray[i].phone);
                      }
                      else if ( strcmp(first, personArray[i].firstName)  == 0  && strcmp(last, personArray[i].lastName)  == 0)
                      {
                            deleted = true;
                      }
            }
            if (deleted)
            {
              rewind(theFile);
              fprintf(theFile, "%d\n", count -1);
              printf("Data removed from the directory.\n");
            }
      }
      else
	{
		return 1;
	}
}
