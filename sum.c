/*
Name: Sreehari Sreekumar Nair
Date: March 26, 2025
Purpose: Program to calculate the sum of array elements by passing the array to a function.
*/

#include <stdio.h>

int sum(int num[],int limit){
	int sum=0;
	for(int i=0;i<limit;i++){
		sum += num[i];
	}
	return sum;
}
	

int main(){
	int limit;
	printf("Enter the number of elements: ");
	scanf("%d",&limit);
	int num[limit];
	printf("Enter the numbers: ");
	for(int i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}
	printf("Sum is %d\n",sum(num,limit));
	return 0;
}


	
	
