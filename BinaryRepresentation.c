#include <stdio.h>
int main()
{
  char userChar;
  int value, bit0, bit1, bit2, bit3;
  printf("Enter hexadecimal character: ");
  scanf(" %c", &userChar);
  if (userChar >= '0' && userChar <= '9')
  {
    value = userChar - '0';
    bit0 = value % 2;
    value = value / 2;

    bit1 = value % 2;
    value = value / 2;

    bit2 = value % 2;
    value = value / 2;

    bit3 = value % 2;
    value = value / 2;
    printf("The Binary representation of 0x%c is: %d%d%d%d\n", userChar, bit3, bit2, bit1, bit0);
  }
  else if (userChar >= 'A' && userChar <= 'F')
  {
    switch (userChar)
    {
    case 'A':
      value = 10;
      break;
    case 'B':
      value = 11;
      break;
    case 'C':
      value = 12;
      break;
    case 'D':
      value = 13;
      break;
    case 'E':
      value = 14;
      break;
    case 'F':
      value = 15;
      break;
    default:
      break;
    }
    bit0 = value % 2;
    value = value / 2;

    bit1 = value % 2;
    value = value / 2;

    bit2 = value % 2;
    value = value / 2;

    bit3 = value % 2;
    value = value / 2;
    printf("The Binary representation of 0x%c is: %d%d%d%d\n", userChar, bit3, bit2, bit1, bit0);
  }
  else
  {
    printf("Looks like you entered a wrong hexadecimal value...!\n");
  }
}