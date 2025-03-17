/*
Name: Sreehari Sreekumar Nair
Date: March 17, 2025
Purpose: Program that reads and prints a two dimensional array.
*/

#include <stdio.h>
void readMat (int[][10], int, int);
void printMat (int[][10], int, int);
int main() {
  int row,col;
  printf("Enter the number of rows and columns: ");
  scanf("%d%d",&row,&col);
  int mat[row][10];
  readMat(mat,row,col);
  printMat(mat,row,col);
  return 0;
  }
  
  void readMat(int mat[][10], int row, int col){
    printf("Enter the elements: ");
    for (int i=0;i<row;i++){
      for (int j=0;j<col;j++){
        scanf("%d",&mat[i][j]);
      }
    }
  }
  
  void printMat(int mat[][10],int row, int col){
    for (int i=0;i<row;i++){
      for (int j=0;j<col;j++){
        printf("%d\t",mat[i][j]);
      }
      printf("\n");
    }
  }
  
  
