/*
Name: Sreehari Sreekumar Nair
Date: 05 February 2025
Purpose: Create a program to perform a sequential search in a one-dimensional array. Input the array elements and the key to search. Display whether the key is found and its position.
*/

#include <stdio.h>
int main(){
  int limit,i,item,found = 0;
  printf("\nEnter the number of elements: ");
  scanf("%d",&limit);
  
  int numbers[limit];
  printf("\nEnter %d elements: ", limit);
  for(i=0;i<limit;i++){
    scanf("%d",&numbers[i]);
  }
  
  printf("\nEnter the number to search: ");
  scanf("%d",&item);
  
  for(i=0;i<limit;i++){
    if (numbers[i] == item){
      printf("\nIndex of %d is %d\n",item, i + 1);
      found = 1;
    }
  }
  if(found != 1){
    printf("Number not found\n");
  }
  return 0;
}
