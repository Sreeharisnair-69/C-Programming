#include <stdio.h>

void readFile(FILE *fp){
	int num;
	while(fscanf(fp,"%d",&num) == 1){
		printf("%d ",num);
	}
}
		
int main(){
	FILE *fp1,*fp2,*fp3;
	int num;
	fp1 = fopen("file.txt","r");
	fp2 = fopen("odd.txt","w");
	fp3 = fopen("even.txt","w");	
	while(fscanf(fp1,"%d",&num) == 1){
		if(num%2==0){
			fprintf(fp3,"%d ",num);
		}
		else{
			fprintf(fp2,"%d ",num);
		}
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	printf("\nThe input text file contents:");
	fp1 = fopen("file.txt","r");
	readFile(fp1);
	printf("\nThe odd text file contents:");
	fp2 = fopen("odd.txt","r");
	readFile(fp2);
	printf("\nThe even text file contents:");
	fp3 = fopen("even.txt","r");
	readFile(fp3);
	printf("\n");
	return 0;
}
