/*
Name: Sreehari Sreekumar Nair
Date: March 26, 2025
Purpose:  Define a macro for the value of π (PI = 3.14159) and write a program to calculate the area of a circle and a cylinder.
 */
 
 #include <stdio.h>
#define PI 3.14159

int main(){
	int aCir,aCyl,rCir,rCyl,h;
	
	printf("Enter the radius of circle: ");
	scanf("%d",&rCir);
	aCir = PI*rCir*rCir;
	printf("Area of circle is %d\n",aCir);
	
	printf("Enter the radius of cylinder: ");
	scanf("%d",&rCyl);
	printf("Enter the height of cylinder: ");
	scanf("%d",&h);
	aCyl = (2*PI*rCyl*h) + (2*PI*rCyl*rCyl);
	printf("Area of cylinder is %d\n",aCyl);
	
	return 0;
}
