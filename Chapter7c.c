/*Write a program that takes three integers
as input and prints the smallest and largest
of these numbers. The main program must
prompt for integers and read them. Write the
functions largest() and smallest() that receive
the entered numbers as their parameters.
Correspondingly, the functions shall return
values corresponding to their names.

Hint:
You can use combined comparisons and the
if-else structure in your program.

Example output:
Enter the 1. number:12355
Enter the 2. number:32145
Enter the 3. number:22112
Among the numbers you entered,
the largest was 32145 and the smallest was 12355.*/

#include <stdio.h>

int smallest(int num1, int num2, int num3);
int largest(int num1, int num2, int num3);

int num1;
int num2;
int num3;

int main()
{
  printf("Enter the 1. number:\n");
  scanf("%d", &num1);
  printf("Enter the 2. number:\n");
  scanf("%d", &num2);
  printf("Enter the 3. number:\n");
  scanf("%d", &num3);

  printf("Among the numbers you entered, the largest was %d and the smallest was %d.\n", largest(num1, num2, num3), smallest(num1, num2, num3));
}

int smallest(int num1, int num2, int num3)
{
  if (num1 < num2 && num1 < num3)
  {
    return num1;
  }
  else if (num2 < num1 && num2 < num3)
  {
    return num2;
  }
  else
  {
    return num3;
  }
}

int largest(num1, num2, num3)
{
  if (num1 > num2 && num1 > num3)
  {
    return num1;
  }
  else if (num2 > num1 && num2 > num3)
  {
    return num2;
  }
  else
  {
    return num3;
  }
}
