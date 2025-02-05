/*
Name: Sreehari Sreekumar Nair
Date: 05 February 2025
Purpose: Program that sorts elements in an array using Bubblesort algorithm.
*/
#include <stdio.h>
int main(){
  int n,i,j,temp;
  printf("\nEnter the number of elements: ");
  scanf("%d",&n);
  
  int numbers[n];
  printf("\nEnter the elements: \n");
  for(i=0;i<n;i++){
    scanf("%d",&numbers[i]);
  }
  
  printf("\nOriginal array:\n");
  for(i=0;i<n;i++){
    printf("%d, ",numbers[i]);
  }
  
  printf("\nSorted array:\n");
  for(i=0;i<n-1;i++){
    for(j=0;j<n-1;j++){
      if(numbers[j]>numbers[j+1]){
        temp = numbers[j];
        numbers[j] = numbers[j+1];
        numbers[j+1] = temp;
      }
    }
  }
  
  for(i=0;i<n;i++){
    printf("%d, ",numbers[i]);
  }
  
  return 0;
}
