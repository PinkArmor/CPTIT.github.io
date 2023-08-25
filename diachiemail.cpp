#include<stdio.h>
#include<ctype.h>
#include<string.h>
void chuanhoa(char c[]){
	for(int i=0; i< strlen(c); i++){
		c[i] = tolower(c[i]);
	}
}
int main(){
	char c[10001];
	gets(c);
	chuanhoa(c);
	char a[50][50];
	int n=0;
	char *token = strtok(c," ");
	while(token != NULL){
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	for(int i=0; i<n-1 ; i++){
		printf("%c", a[i][0]);
	}
	printf("%s",a[n-1]);
	printf("@ptit.edu.vn");
}
