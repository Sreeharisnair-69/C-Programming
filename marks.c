/*
Name: Sreehari Sreekumar Nair
Date: April 2, 2025
Purpose: Program to calculate the total and average marks of a group of students using array of structures, include student name, roll number and marks in three subjects.
*/

#include <stdio.h>
typedef struct{
  char name[30];
  int rollNo;
  float cp;
  float foc;
  float mat;
} student;

int main(){
  int n;
  float total,avg;
  printf("\nEnter the number of students: ");
  scanf("%d",&n);
  student s[n];
  for(int i=0;i<n;i++){
    printf("\nEnter the name: ");
    scanf("%s",s[i].name);
    printf("\nEnter the roll number: ");
    scanf("%d",&s[i].rollNo);
    printf("\nEnter the mark for CP: ");
    scanf("%f",&s[i].cp);
    printf("\nEnter the mark for FOC: ");
    scanf("%f",&s[i].foc);
    printf("\nEnter the mark for Maths: ");
    scanf("%f",&s[i].mat);
    printf("\n");
  }
  
  for(int i=0;i<n;i++){
    total+=s[i].cp+s[i].foc+s[i].mat;
  }
  printf("\nTotal is %f",total);
  
  printf("\n");
  
  printf("\nAverage is %f\n",total/n);
  return 0;
}
