#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  //   ||-------- Placeholder --------||
  printf("Hello, Welcome to my %c programming journey! 🚀", 'C');
  printf("My average grade: %.1f\n", 93.7);

  //   ||-------- Variable declaration --------||
  int age = 17;
  double tempt = 26.5;

  //   ||-------- Casting --------||
  int num1 = 5, num2 = 2;
  printf("result: %lf\n", (double)num1 / (double)num2);

  //   ||-------- Swap --------||
  int a = 10, b = 20, temp = a;
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  a = b;
  b = temp;
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  //   ||-------- Arithmetics progression --------||
  printf("Welcome to arithmetics progression calculation.\n please if you're not providing the following info, just type no\n");
  float a1, an, Sn, d;
  int n;
  printf("Enter the initial term (a1): ");
  scanf("%f", &a1);
  printf("Enter the n-th term (an): ");
  scanf("%f", &an);
  printf("Enter the number of element in the sequence (n): ");
  scanf("%d", &n);
  printf("Enter difference (d): ");
  scanf("%f", &d);
  Sn = n / 2.0 * (2 * a1 + (n - 1) * d);
  printf("The sum of the Arithmetic Sequence is: %.2f\n", Sn);

  //   ||-------- Conditions --------||
  int score;
  printf("Enter your Score: ");
  scanf("%d", &score);
  if (!(score > 80))
  {
    printf("Congratulations!\n");
  }
  else
  {
    printf("Failed.. Try again\n");
  }

  //   ||-------- Switch Case --------||
  char grade;
  printf("Enter your grade(A-F): ");
  scanf(" %c", &grade);
  switch (grade)
  {
  case 'A':
    printf("Grade between 90 - 100\n");
    break;
  case 'B':
    printf("Grade between 80 - 89\n");
    break;
  case 'C':
    printf("Grade between 70 - 79\n");
    break;
  case 'D':
    printf("Grade between 60 - 79\n");
    break;
  case 'F':
    printf("Grade between 0 - 59\n");
    break;
  default:
    printf("Error.. Try Again\n");
  }

  //   ||-------- Ternary Operators --------||
  int num3, num4;
  printf("Enter any number(1): ");
  scanf("%d", &num1);
  printf("Enter any number(1): ");
  scanf("%d", &num2);
  (num1 > num2) ? printf("%d small\n", num2) : printf("%d is small\n", num1);

  //   ||-------- Number Base --------||
  int myChar1 = 65;
  printf("Character: %c \n", myChar1);
  printf("Decimal ASCII Code: %d \n", myChar1);
  printf("Hexadecimal ASCII Code: %X \n", myChar1);

  //   ||-------- Loops --------||
  int userAmount, count = 0;
  printf("Enter your number of print: ");
  scanf("%d", &userAmount);
  while (count < userAmount)
  {
    printf("* ");
    count++;
  }
  printf("\n");

  int userGrade;
  do
  {
    printf("Enter a Valid grade between 0 - 100: ");
    scanf("%d", &userGrade);
  } while (userGrade <= 0 || userGrade > 100);
  printf("Thanks! You've entered %d, which is a valid grade!\n", userGrade);

  for (int i = 0; i < 10; i++)
  {
    printf("I'm sorry for not listening to my Teacher. I will practice more next time!\n");
  }

  return 0;
}
