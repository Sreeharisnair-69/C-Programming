/*
Name: Sreehari Sreekumar Nair
Date: April 2, 2025
Purpose: program to 
*/
#include <stdio.h>
typedef struct{
  char name[30];
  int rollNo;
  float cgpa;
}student;

int main(){
  int limit;
  printf("Enter the number of students: ");
  scanf("%d",&limit);
  student S[limit];
  for(int i=0;i<limit;i++){
    printf("\nEnter name: ");
    scanf("%s",S[i].name);
    printf("\nEnter roll number: ");
    scanf("%d",&S[i].rollNo);
    printf("\nEnter cgpa: ");
    scanf("%f",&S[i].cgpa);
    printf("\n");
  }
  printf("Student details:\n");
  for(int i=0;i<limit;i++){
    printf("\nName:%s",S[i].name);
    printf("\nRoll Number:%d",S[i].rollNo);
    printf("\nCGPA:%f",S[i].cgpa);
    printf("\n");
  }
  return 0;
}
  
