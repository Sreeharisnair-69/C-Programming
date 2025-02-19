/*
Name: Sreehari Sreekumar Nair
Date: February 19, 2025
Purpose: Create a program to input two strings and compare them using the strcmp() function. Display whether the strings are equal or not.
*/

#include <stdio.h>
#include<string.h>
int main() {
	char str1[20],str2[20];
	printf("Enter first string: ");
	scanf("%s",str1);
	printf("Enter second string: ");
	scanf("%s",str2);
	
	if (strcmp(str1,str2)==0){
		printf("\nStrings are equal\n");
	}
	else{
		printf("\nStrings are not equal\n");
	}
	
	return 0;
}
	
