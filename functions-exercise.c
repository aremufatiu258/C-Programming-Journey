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
      printf("The maximum number between %d and %d is: %d", firstDigit, secondDigit, firstDigit);
    }
    else
    {
      printf("The maximum number between %d and %d is: %d", firstDigit, secondDigit, secondDigit);
    }
  }
  else
  {
    printf("Ooops, Looks like you didn't enter a 2 - digit number!");
  }
}

int main()
{
  int twoDigitNumber;
  printf("Enter a two digit number: ");
  scanf("%d", &twoDigitNumber);
  findMaximumDigit(twoDigitNumber);

  return 0;
}