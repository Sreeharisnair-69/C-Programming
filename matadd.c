/*
Name: Sreehari Sreekumar Nair
Date: 07 February 2025
Purpose: Program to input two 2D arrays, perform matrix addition and print the resulting matrix.
*/

#include <stdio.h>
int main() {
  int row,col,i,j;
  printf("Enter the number of rows and columns for the matrices: ");
  scanf("%d%d",&row,&col);
  
  int matrix1[row][col];
  printf("\nEnter the elements of matrix 1: \n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix1[i][j]);
    }
  }
  
  int matrix2[row][col];
  printf("\nEnter the elements of matrix 2: \n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix2[i][j]);
    }
  }
  
  
  printf("\n First matrix:\n");
  
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf("%d\t",matrix1[i][j]);
      }
    printf("\n");
  }
  
  
  
  printf("\n Second matrix:\n");
  
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf("%d\t",matrix2[i][j]);
      }
    printf("\n");
  }
  
  int matrix3[i][j];
  printf("\n Resultant matrix:\n");
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
      printf("%d\t",matrix3[i][j]);
      }
    printf("\n");
  }
    
  return 0;
}
