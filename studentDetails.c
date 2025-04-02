/*
Name: Sreehari Sreekumar Nair
Date: April 2, 2025
*/

#include <stdio.h>
typedef struct{
  char name[30];
  int rollNo;
  float cgpa;
}student;

int main(){
  student S;
  printf("\nEnter name: ");
  scanf("%s",S.name);
  printf("\nEnter roll number: ");
  scanf("%d",&S.rollNo);
  printf("\nEnter cgpa: ");
  scanf("%f",&S.cgpa);
  printf("\n");
  
  printf("Student details:\n");
  printf("\nName:%s",S.name);
  printf("\nRoll Number:%d",S.rollNo);
  printf("\nCGPA:%f",S.cgpa);
  printf("\n");
  
  return 0;
}
  
