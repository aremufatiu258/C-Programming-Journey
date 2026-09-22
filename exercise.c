#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  //   ||-------- Printing -------||
  printf("Full Name: Are... \nAge: ... \nGender: Male\n");
  printf("%d + %d = %d\n", 5, 2, 5+2);
  printf("%d %% %d = %d\n", 5, 2, 5 % 2);

  //   ||-------- Input --------||
  int currentYear;
  int currentAge;
  printf("Enter Current Year: ");
  scanf("%d", &currentYear);
  printf("Enter your currentAge: ");
  scanf("%d", &currentAge);
  printf("Your year of birth is: %d\n", currentYear-currentAge);

  //   ||-------- Casting --------||
  int grade1, grade2, grade3;
  scanf("%d", &grade1);
  scanf("%d", &grade2);
  scanf("%d", &grade3);
  printf("Average is: %.2lf\n", (double)(grade1 + grade2 + grade3) / 3);
  
  double celsius, fahrenheit;
  printf("Enter Fahrenheit degree: ");
  scanf("%lf", &fahrenheit);
  printf("%lf => Celsius Degree is: %lf\n", fahrenheit, (fahrenheit - 32) / 1.8);

  //   ||-------- Swap --------||
  int swapA = 10, swapB = 20, temp = swapA;
  printf("a = %d\n", swapA);
  printf("b = %d\n", swapB);
  swapA = swapB;
  swapB = temp;
  printf("a = %d\n", swapA);
  printf("b = %d\n", swapB);

  //   ||-------- Maths Calculation --------||
  //-- decimal part --//🔥:
  float data;
  printf("Enter your float point number: ");
  scanf("%f", &data);
  printf("The decimal part is: %.3f\n", data - (int)data);
  //-- digit seperator --//🔥:
  int userNum; // 234
  int units, tens, hundreds;
  printf("Enter your 3-digit number: ");
  scanf("%d", &userNum);
  units = userNum % 10;
  tens = (userNum / 10) % 10;
  hundreds = (userNum / 10) / 10;
  printf("The reversed number of %d is: %d%d%d(%d)\n", userNum, units, tens, hundreds, (hundreds + tens + units));
  //-- distant.. two-point --//🔥:
  float pointx1, pointy1, pointx2, pointy2;
  float distance; // sqrt((x1-x2)^2 + (y1-y2)^2)
  printf("Enter X1: ");
  scanf("%f", &pointx1);
  printf("Enter Y1: ");
  scanf("%f", &pointy1);
  printf("Enter X2: ");
  scanf("%f", &pointx2);
  printf("Enter Y2: ");
  scanf("%f", &pointy2);
  distance = sqrt((pointx1 - pointx2) * (pointx1 - pointx2) + (pointy1 - pointy2) * (pointy1 - pointy2));
  printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n", pointx1, pointy1, pointx2, pointy2, distance);
  //-- powers --//🔥:
  int x;
  int x2, x4, x6, x8;
  printf("Enter your number: ");
  scanf("%d", &x);
  x2 = x * x;
  x4 = x2 * x2;
  x6 = x4 * x2;
  x8 = x4 * x4;
  printf("The powers of %d are as follows:\n", x);
  printf("%d to the power of ^2, ^4, ^6, ^8 respectively is: %d, %d, %d, %d\n", x, x2, x4, x6, x8);

  //   ||-------- Conditions --------||
  int a, b, c;
  int max, min;
  printf("Enter 1st number: ");
  scanf("%d", &a);
  printf("Enter 2nd number: ");
  scanf("%d", &b);
  printf("Enter 3rd number: ");
  scanf("%d", &c); // 5 3 7, 8 7 2, 3 6 7, 7 7 3
  max = a;
  min = a;
  if (b > max)
  {
    max = b;
  }
  if (min > b)
  {
    min = b;
  }
  if (c > max)
  {
    max = c;
  }
  if (min > c)
  {
    min = c;
  }
  printf("Maximum is %d, Minimum is %d\n", max, min);
  //-- Pass --//🔥:
  float userScore;
  printf("Enter your grade: ");
  scanf("%f", &userScore);
  if (userScore >= 80)
  {
    printf("Excellent job!\n");
  }
  else if (userScore >= 60)
  {
    printf("Not bad, Do better!\n");
  }
  else
  {
    printf("Ohh, You didn't pass!\n");
  }
  //-- Seconds converter --//🔥:
  int totalSeconds;
  int hour, minute, remainingSeconds;
  printf("Enter your seconds: ");
  scanf("%d", &totalSeconds);
  hour = totalSeconds / 3600;
  minute = (totalSeconds - (hour * 3600)) / 60;
  remainingSeconds = (totalSeconds - (hour * 3600)) % 60;
  if (hour < 10)
  {
    printf("0");
  }
  printf("%d : ", hour);
  if (minute < 10)
  {
    printf("0");
  }
  printf("%d : ", minute);
  if (remainingSeconds < 10)
  {
    printf("0");
  }
  printf("%d\n", remainingSeconds);
  //-- Divisible --//🔥:
  int num1, num2, num3;
  int maximum; // 10 100 1000
  printf("Enter three whole numbers: \n");
  scanf("%d%d%d", &num1, &num2, &num3);
  maximum = num1;
  if (num2 > maximum)
  {
    maximum = num2;
  }
  if (num3 > maximum)
  {
    maximum = num3;
  }
  if (num1 == 0 || num2 == 0 || num3 == 0)
  {
    printf("Cannot divide by 0! Check your input once again\n");
  }
  else if (maximum % num1 == 0 && maximum % num2 == 0 && maximum % num3 == 0)
  {
    printf("Divisible: %d, %d, %d\n", num1, num2, num3);
  }
  else
  {
    printf("Non-divisible: %d, %d, %d\n", num1, num2, num3);
  }

  //   ||-------- Number Base --------||
  int day, month, year;
  printf("Enter day: ");
  scanf("%d", &day);
  printf("Enter month: ");
  scanf("%d", &month);
  printf("Enter year: ");
  scanf("%d", &year);
  printf("Day: 0x%X \n", day);
  printf("Month: 0x%X \n", month);
  printf("Year: 0x%X \n", year);
  //-- character detector --//🔥:
  char userChar;
  printf("Enter character: ");
  scanf(" %c", &userChar);
  printf("%d\n", userChar);
  if (userChar >= 'A' && userChar <= 'Z')
  {
    printf("%c is an Uppercase Letter!\n", userChar);
  }
  else if (userChar >= 'a' && userChar <= 'z')
  {
    printf("%c is a Lowercase Letter!\n", userChar);
  }
  else if (userChar >= '0' && userChar <= '9')
  {
    printf("%c is a digit!\n", userChar);
  }
  else
  {
    printf("Other..!\n");
  }
  
  //   ||-------- Loops --------||
  //-- while Loop --//🔥:
  int userAmount, count = 0;
  printf("Enter your number of print: ");
  scanf("%d", &userAmount);
  while (count < userAmount)
  {
    printf("* ");
    count ++;
  }
  printf("\n");
  //-- do..while Loop --//🔥:
  int userGrade;
  do
  {
    printf("Enter a Valid grade between 0 - 100: ");
    scanf("%d", &userGrade);
  } while (userGrade <= 0 || userGrade > 100);
  printf("Thanks! You've entered %d, which is a valid grade!\n", userGrade);
  //-- for Loop --//🔥:
  int userNumber, userPower;
  printf("Enter a Number: ");
  scanf("%d", &userNumber);
  printf("Enter the Power: ");
  scanf("%d", &userPower);
  int calculatedPowers = 1;
  for (int i = 1; i <= userPower; i++)
  {
    calculatedPowers *= userNumber;
  }
  printf("%d ^ %d is: %d\n", userNumber, userPower, calculatedPowers);
  //-- Nested Loop --//🔥:
  int n;
  printf("Enter any Number(positive): ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= i; k++)
    {
      printf("%d ", i);
    }
    printf("\n");
  }
  //-- continue; & break; --//🔥:
  for (int i = 1; i <= 10; i++)
  {
    if (i == 5)
    {
      printf("%d continue!", i);
      continue;
    }
    else if (i == 9)
    {
      printf("%d break!", i);
      break;
    }
    printf("%d ", i);
  }
  printf("\n");
  //-- Multiplication Table --//🔥:
  int num, element;
  printf("Enter num: ");
  scanf("%d", &num);
  printf("Enter the number of element of %d multiplicator: ", num);
  scanf("%d", &element);
  for (int i = 1; i <= element; i++)
  {
    printf("%d * %d = %d\n", num, i, num*i);
  }

  //-- 1-cent Multiplier --//🔥:
  int days = 30;
  char choice;
  double amountPerDay = 0.01;
  printf("Did you prefer getting 1 dollar at the moment OR 0.01 cent for 30 days? \n Type A or B respectively for your choice: ");
  scanf(" %c", choice);
  if (choice == 'A' || choice == 'a')
  {
    printf("Ohhhh!, Looks like you need some money urgently.");
  }
  else if (choice == 'B' || choice == 'b')
  {
    char progress;
    printf("Did you want to see the progress of the doubling each day: ");
    scanf(" %c", progress);
  }

  //-- Evens specifier --//🔥:
  int numberOfEvens, evens = 2;
  printf("Enter number of evens: ");
  scanf("%d", &numberOfEvens);
  for (int i = 1; i <= numberOfEvens; i++)
  {
    printf("%d ", evens);
    evens += 2;
  }
  
  //-- pyramid print form --//🔥:
  int userRows;
  int space, currentValue = 1;
  printf("Insert 'n' (number of rows in pyramid): ");
  scanf("%d", &userRows);
  space = userRows - 1;
  for (int i = 1; i <= userRows; i++)
  {
    for (int j = space; j >= 1; j--)
    {
      printf(" ");
    }
    space--;
    for (int k = 1; k <= i; k++)
    {
      printf("%d ", currentValue);
      currentValue += 1;
    }
    printf("\n");
  }

  int num, sumOfNum = 0;
  printf("Enter a number: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      printf("%d can be divided by both 3 or 5!\n", i);
      sumOfNum += i;
    }
    
  }
  printf("The sum of the number divisible by 3 and 5 btw %d is: %d", num, sumOfNum);
  

  // for (int i = 1; i <= days; i++)
  // {
  //   amountPerDay *= 2;
  //   printf("Day %d: %.3f\n", i, amountPerDay);
  // }
  // printf("Your total amount after 30 days is: $%.2f", amountPerDay);




  return 0;
}