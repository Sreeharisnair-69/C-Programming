/* 
Name: Sreehari S Nair
Date: 29 January 2025
Purpose: program to input three numbers and find the largest among them using nested if statements.
*/

#include <stdio.h>
int main(){
  int num1,num2,num3;
  printf("Enter first number:");
  scanf("%d",&num1);
  printf("Enter second number:");
  scanf("%d",&num2);
  printf("Enter third number:");
  scanf("%d",&num3);
  
  if (num1>num2){
    if (num1>num3){
      printf("\nBiggest = %d\n",num1);
    }
    else if (num1==num3){
      printf("\nBiggest = %d\n",num3);
    }
    else{
      printf("\nBiggest = %d\n",num3);
    }
  }
  
  else if (num2>num1){
    if (num2>num3){
      printf("\nBiggest = %d\n",num2);
    }
    else if (num2==num3){
      printf("\nBiggest = %d\n",num2);
    }
    else{
      printf("\nBiggest = %d\n",num3);
    }    
  }
  
  else{
    if (num1==num2){
      printf("\nBiggest = %d\n",num1);
    }
    else{  
      printf("\nNumbers may be equal.\n");
    }
  }
  return 0;
}


