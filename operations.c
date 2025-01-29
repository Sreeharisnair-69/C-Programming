/*
Name: Sreehari S Nair
Date: 29 January 2025
Purpose: program that acts as a simple calculator to perform basic arithmetic operation.
*/
#include <stdio.h>
int main() {
  int num1, num2, result = 0;
  char operator;
  printf("\nEnter first number:");
  scanf("%d",&num1);
  printf("Enter second number:");
  scanf("%d",&num2);
  printf("Enter operator (+, -, *, /, %%):");
  scanf(" %c",&operator);
  
  switch (operator){
    case'+': 
      result = num1 + num2;
      printf("\nResult = %d\n",result);
      break;
      
    case'-':
      result = num1 - num2;
      printf("\nResult = %d\n",result);
      break;
      
    case'*': 
      result = num1 * num2;
      printf("\nResult = %d\n",result);
      break;
      
    case'/':
      result = num1 / num2;
      printf("\nResult = %d\n",result);
      break;
      
    case'%':
      result = num1 % num2;
      printf("\nResult = %d\n",result);
      break;
    
    default:
      printf("Invalid Operator");
  }
  return 0;
}
