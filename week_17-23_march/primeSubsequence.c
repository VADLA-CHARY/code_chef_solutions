#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char * makeSub(char str[]){
	char *c=malloc(sizeof(char )*strlen(str)-1);
	int i;
	for(i=0;i<strlen(str)-1;i++){
		c[i]=str[i+1];
		
	}
	c[i]='\0';
	return c;
}
int isPrime(int value){
	int j;
	for(j=2;j<value;j++){
		if(value%j==0){
			return 0;
		}
	}
	if(value==1){
		return 0;
	}
	return 1;
}
int convert(char str[]){
	int i=0,l=strlen(str),sum=0,rem;
	while(str[i]!='\0'){
		rem=str[i]-48;
		sum+=rem*pow(10,l-i-1);
		i++;
	}
	return sum;
	
	
}
int count=0;
int charySub(char input[],char output[]){
	fflush(stdin);
	if(strlen(input)==0){
		if(strlen(output)==0){
			return ;
		}
		int val=convert(output);
		if(isPrime(val)){
			count++;
		}
		return ;
	}
	int i=0,l=strlen(input);
	char *next=malloc(sizeof(char)*l);
	next=makeSub(input);
	
	char text[l+1];
	for(i=0;i<l;i++){ //buffer
		text[i]=*(next+i);
	}
	charySub(text,output);
	int ol=strlen(output);
	char temp[ol+1];
	strcpy(temp,output);
	strcat(output,input);
	output[ol+1]='\0';
	charySub(text,output);
	strcpy(output,temp);
	
	

	
}
int main(){
	char input[9],output[100]="";
	scanf("%s",input);
	charySub(input,output);
	printf("%d\n",count);
}
