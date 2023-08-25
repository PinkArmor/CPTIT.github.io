#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char s1[1001];
	gets(s1);
	char s2[11];
	scanf("%s",s2);
	char *token= strtok(s1, " ");
	char a[100][100]; int n=0;
	while(token !=NULL){
		if(strcmp(token, s2) !=0){
			strcpy(a[n],token);
			++n;
		}
		token = strtok(NULL, " ");
	}
	for(int i=0; i<n; i++){
		printf("%s", a[i]);
		if(i != n-1) printf(" ");
	}
}
