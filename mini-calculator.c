#include <stdio.h>
int main()
{
  int operand1, operand2, result;
  char operator;
  printf("Enter the first operand: ");
  scanf("%d", &operand1);
  printf("Enter the second operand: ");
  scanf("%d", &operand2);
  printf("Enter the operator ('+', '-', '*', '/', '%%'): ");
  scanf(" %c", &operator);
  if (operand2 == 0 && (operator == '/' || operator == '%'))
  {
    printf("This operation(%d %c %d) is not legit!\n", operand1, operator, operand2);
  }
  else
  {
    switch (operator)
    {
    case '+':
      result = operand1 + operand2;
      printf("The result of %d %c %d is: %.2lf\n", operand1, operator, operand2, (double)result);
      break;
    case '-':
      result = operand1 - operand2;
      printf("The result of %d %c %d is: %.2lf\n", operand1, operator, operand2, (double)result);
      break;
    case '*':
      result = operand1 * operand2;
      printf("The result of %d %c %d is: %.2lf\n", operand1, operator, operand2, (double)result);
      break;
    case '/':
      result = operand1 / operand2;
      printf("The result of %d %c %d is: %.2lf\n", operand1, operator, operand2, (double)result);
      break;
    case '%':
      result = operand1 % operand2;
      printf("The result of %d %c %d is: %.2lf\n", operand1, operator, operand2, (double)result);
      break;
    default:
      printf("Looks like you've entered the wrong operator here!\n");
      break;
    }
  }
}