/*
Sreehari Sreekumar Nair
April 9, 2025
Program to count the number of words, lines and characters in a separate file.

Contents of file.txt: 
Hi my name is John Doe. 
I am a first year student. 
I like programming.
*/

#include <stdio.h>

int main(){
    FILE *fp1;
    fp1 = fopen("file.txt","r");
    char ch;
    int wc=0,lc=0,cc=0;
    while(fscanf(fp1,"%c",&ch)==1){
	if(ch==' '){
	    wc+=1;
	}
	if(ch=='\n'){
	    lc+=1;
	}
	cc+=1;
    }
	
    printf("\nWord Count: %d",wc+1); //To also include first word.
    printf("\nLine Count: %d",lc);
    printf("\nCharacter Count: %d\n",cc-1); //To remove the '/0' from count.
    fclose(fp1);
    return 0;
}

	
