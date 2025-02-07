/*
Name: Sreehari Sreekumar Nair
Date: 07 February 2025
Purpose: Program to input a matrix, transpose it and print the result.
*/

#include <stdio.h>
int main() {
  int row,col,i,j;
  printf("Enter the number of rows and columns: ");
  scanf("%d%d",&row,&col);
  
  int matrix[row][col];
  printf("\nEnter the elements: \n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  
  printf("\n Original matrix:\n");
  
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf("%d\t",matrix[i][j]);
      }
    printf("\n");
  }
  
  printf("\n Transposed matrix:\n");
  
  for(i=0;i<col;i++){
    for(j=0;j<row;j++){
      printf("%d\t",matrix[j][i]);
      }
    printf("\n");
  }
    
  return 0;
}
