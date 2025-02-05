/*
Name: Sreehari Sreekumar Nair
Date: 05 February 2025
Purpose: Write a program to input elements into a one-dimensional array and find the maximum and minimum elements. Display their positions in the array.
*/

#include <stdio.h>
int main(){
  int limit,i;
  printf("\nEnter the number of elements: ");
  scanf("%d",&limit);
  
  int numbers[limit];
  printf("\nEnter %d elements: \n", limit);
  for(i=0;i<limit;i++){
    scanf("%d",&numbers[i]);
  }
  
  int max,min,minPos,maxPos;
  min = numbers[0];
  max = numbers[0];
  minPos = 0;
  maxPos = 0;
  for(i=1;i<limit;i++){
    if(numbers[i] > max){
      max = numbers[i];
      maxPos = i;
    }
    if(numbers[i] < min){
      min = numbers[i];
      minPos = i;
    }
  }
  printf("The minimum is %d and the position is %d\n",min,minPos+1);
  printf("The maximum is %d and the position is %d\n",max,maxPos+1);
  return 0;
}
