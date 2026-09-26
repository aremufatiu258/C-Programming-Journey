#include <stdio.h>
#include <stdlib.h>

void findMaximumDigit(int twoDigitNumber)
{
  int firstDigit, secondDigit;
  if (twoDigitNumber / 10 != 0)
  {
    firstDigit = twoDigitNumber / 10;
    secondDigit = twoDigitNumber % 10;
    if (firstDigit > secondDigit)
    {
      printf("The maximum digit in %d is: %d\n", twoDigitNumber, firstDigit);
    }
    else
    {
      printf("The maximum digit in %d is: %d\n", twoDigitNumber, secondDigit);
    }
  }
  else
  {
    printf("Ooops, Looks like you didn't enter a 2 - digit number!");
  }
}

int factorialOfNumber(int factorialNumber)
{
  int factorial = 1;
  for (int i = 1; i <= factorialNumber; i++)
  {
    factorial *= i;
  }
  return factorial;
}

int isEven(int num)
{
  if (num % 2 == 0)
  {
    return 1;
  }
  return 0;
}

int main()
{
  //   ||-------- Maximum Digit of Two-Digit Number --------||
  int twoDigitNumber;
  printf("Enter a two digit number: ");
  scanf("%d", &twoDigitNumber);
  findMaximumDigit(twoDigitNumber);

  //   ||-------- Factoria of a given number --------||
  int userNum, factorialResult;
  printf("Enter a number(positive number): ");
  scanf("%d", &userNum);
  factorialResult = factorialOfNumber(userNum);
  printf("The factorial of %d is: %d\n", userNum, factorialResult);

  //   ||-------- Check if Number is Even --------||
  int numberToCheck;
  printf("Enter a number: ");
  scanf("%d", &numberToCheck);
  printf("%d", isEven(numberToCheck));
  //
  //
  //
  return 0;
}