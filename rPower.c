/*
Name: Sreehari Sreekumar Nair
Date: March 26, 2025
Purpose: Find power of an inputted base and exponent using recursion.
*/

#include <stdio.h>

int power(int base, int exp){
	if(exp == 1){
		return base;
	}
	
	else if(exp == 0){
		return 1;
	}
	
	else{
		return base * power(base, exp-1);
	}
}

int main(){
	int base, exp;
	printf("Enter the base first, then the exponent: ");
	scanf("%d %d",&base,&exp);
	printf("Answer is %d \n",power(base,exp));
	return 0;
}
