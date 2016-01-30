/*Write a calculator program that calculates the sum, difference or product of two integers.
The program asks for the type of calculation first (1 = sum, 2 = difference, 3 = product).
After calculation, the result is printed on the screen and the program returns to prompt for the next calculation.
You should write a function for each calculation, prompting for the numbers,
performing the desired calculation and printing the answer on the screen.
The program is terminated by entering a negative number just like in the previous exercise.

Example output:
1: sum of two numbers
2: difference of two numbers
3: product of two numbers
<0: terminate the program
Select calculation:1
Enter the first number:55
Enter the second number:33
55 + 33 = 88

1: sum of two numbers
2: difference of two numbers
3: product of two numbers
<0: terminate the program
Select calculation:-1
Terminating the program...*/

#include <stdio.h>

void sum(void);
void difference(void);
void product(void);

int num1;
int num2;

int main()
{
  int choice;
  do
  {
    printf("1:sum of two numbers\n2:difference of two numbers\n3:product of two numbers\n");
    printf("<0: terminate the program\n");
    printf("Select calculation:");
    scanf("%d", &choice);

    if(choice < 0)
    {
      printf("Terminating the program...\n");
      return 0;
    }

    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);

    if(choice == 1)
    {
      sum();
    }
    else if(choice == 2)
    {
      difference();
    }
    else if(choice == 3)
    {
      product();
    }
    else
    {
      printf("You entered an invalid number.\n\n");
    }
  }
  while(choice>0);

  return 0;
}

void sum(void)
{
  printf("%d + %d = %d\n\n", num1, num2, num1 + num2);
}

void difference(void)
{
  printf("%d - %d = %d\n\n", num1, num2, num1 - num2);
}

void product(void)
{
  printf("%d * %d = %d\n\n", num1, num2, num1 * num2);
}
