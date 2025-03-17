/*
Name: Sreehari Sreekumar Nair
Date: March 17, 2025
Purpose: Program that adds two matrices.
*/
#include <stdio.h>
void readMat(int[][10],int,int);
void addMat(int[][10],int[][10],int[][10],int,int);
void printMat(int[][10],int,int);
int main() {
  int row,col;
  printf("Enter the amount of rows and columns: ");
  scanf("%d%d",&row,&col);
  
  int mat1[row][10];
  printf("Enter the elements of the first matrix: ");
  readMat(mat1,row,col);
  
  int mat2[row][10];
  printf("Enter the elements of the second matrix: ");
  readMat(mat2,row,col);
  
  int mat3[row][10];
  printf("Resulting matrix:\n");
  addMat(mat1,mat2,mat3,row,col);
  printMat(mat3,row,col);
  return 0;
}

void readMat(int mat[][10],int row,int col){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&mat[i][j]);
    }
  }
}

void addMat(int mat1[][10],int mat2[][10],int mat3[][10],int row,int col){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        mat3[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
}

void printMat(int mat3[][10],int row,int col){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",mat3[i][j]);
    }
    printf("\n");
  }
}
  

  
  
  
  
