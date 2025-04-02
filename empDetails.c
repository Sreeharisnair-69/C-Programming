/*
Name: Sreehari Sreekumar Nair
Date: April 2, 2025
Purpose: Program to define a structure for storing employee details, input the details for n employees and list them.
*/

#include <stdio.h>
typedef struct{
  char name[30];
  int id;
  int salary;
}employee;

int main(){
  int limit;
  printf("Enter the number of employees: ");
  scanf("%d",&limit);
  employee e[limit];
  for(int i=0;i<limit;i++){
    printf("\nEnter employee name: ");
    scanf("%s",e[i].name);
    printf("\nEnter employee ID: ");
    scanf("%d",&e[i].id);
    printf("\nEnter employee salary: ");
    scanf("%d",&e[i].salary);
    printf("\n");
  }
  printf("Employee details:\n");
  for(int i=0;i<limit;i++){
    printf("\nName:%s",e[i].name);
    printf("\nID:%d",e[i].id);
    printf("\nSalary:%d",e[i].salary);
    printf("\n");
  }
  return 0;
}
