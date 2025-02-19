/*
Name: Sreehari Sreekumar Nair
Date: February 19, 2025
Purpose: Write a program to reverse a string entered by the user without using string library functions. Display the reversed string.
*/

#include <stdio.h>
int main() {
	char str[20],temp;
	printf("Enter a string:\n");
	scanf("%s",str);
	
	int i,j,len;
	for(len=0;str[len]!='\0';len++);
	
	i=len-1;
	for(j=0;j<=i;j++){
		temp=str[j];
		str[j]=str[i];
		str[i]=temp;
		i--;
	}
	
	printf("\nReverse is ");
	puts(str);
	return 0;
}

