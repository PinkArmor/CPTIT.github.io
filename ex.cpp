#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void chuyen5(char c[]){
	for(int i=0; i< strlen(c); i++){
		if(c[i] == '5' || c[i]== '6'){
			c[i]='5';
		}
	}
}
void chuyen6(char c[]){
	for(int i=0; i< strlen(c); i++){
		if(c[i] == '5' || c[i]== '6'){
			c[i]='6';
		}
	}
}
int main(){
	int t; scanf("%d",&t);
	scanf("\n");
	while(t--){
		char c1[200]; scanf("%s",c1);
		char c2[200]; scanf("%s",c2);
		long long max=0, min=0;
	    for(int i=0; i< strlen(c1);i++){
	    	chuyen5(c1-'0');
		}
		for(int i=0; i< strlen(c2);i++){
	    	chuyen5(c2-'0');
		}
	    min = c1+c2;
	    for(int i=0; i< strlen(c1);i++){
	    	chuyen6(c1-'0');
		}
		for(int i=0; i< strlen(c2);i++){
	    	chuyen6(c2-'0');
		}
	    max = c1+c2;
	    printf("%d %d\n",min, max);
	    
	}
}
