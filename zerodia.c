/*
Name: Sreehari Sreekumar Nair
Date: 07 February 2025
Purpose: Program to turn all diagonal elements into 0.
*/

#include <stdio.h>
int main() {
  int row,col,i,j;
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
  
    for(i=0;i<row;i++){
      for(j=0;j<col;j++){
        if(i==j){
          matrix[i][j] = 0;
        }
      }
    }
    
    printf("\n");
    
    for(i=0;i<row;i++){
      for(j=0;j<col;j++){
        printf("%d\t",matrix[i][j]);
      }
      if(j==col){
        printf("\n");
      }
    }
    
  }
  else{
    printf("\nNot a square matrix.\n");
  }
  return 0;
}
