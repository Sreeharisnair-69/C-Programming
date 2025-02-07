/*
Name: Sreehari Sreekumar Nair
Date: 07 February 2025
Purpose: Program to find the sum of all diagonal elements of a 2D array.
*/

#include <stdio.h>
int main() {
  int row,col,sum=0;
  printf("Enter the number of rows and columns: ");
  scanf("%d%d",&row,&col);
  
  if(row==col){
    int matrix[row][col];
    printf("\nEnter the elements: \n");
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        scanf("%d",&matrix[i][j]);
      }
    }
  
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        if(i==j){
          sum+=matrix[i][j];
        }
      }
    }
    printf("\nSum = %d\n",sum);
  }
  else{
    printf("\nNot a square matrix.\n");
  }
  return 0;
}
    
