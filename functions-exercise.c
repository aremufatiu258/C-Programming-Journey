#include <stdio.h>
#include <stdlib.h>

void findMaximumDigit(int twoDigitNumber)
{
  int firstDigit, secondDigit;
  int maximumDigit;
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

int factoriaOfNumber(int factoriaNumber)
{
  int factorialResult = 1;
  for (int i = 1; i <= factoriaNumber; i++)
  {
    factorialResult *= i;
  }
  return factorialResult;
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
  factorialResult = factoriaOfNumber(userNum);
  printf("The factoria of %d is: %d", userNum, factorialResult);
  // 
  // 
  return 0;
}