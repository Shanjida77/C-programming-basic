#include<stdio.h>

int main()
{
  char operator;
  double first, second ,result;
  printf("Enter an operator: ");
  scanf("%c", &operator);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (operator) {
    case '+':
      result = first + second;
      printf("The Result is : %.1lf", result);
      break;
    case '-':
      result = first - second;
      printf("The Result is : %.1lf", result);
      break;
    case '*':
      result = first * second;
      printf("The Result is : %.1lf", result);
      break;
    case '/':
      result = first / second;
      printf("The Result is : %.1lf", result);
      break;
    default:
      printf("Please enter an operator");
  }

  return 0;
}
