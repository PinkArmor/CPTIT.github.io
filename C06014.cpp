#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chuanhoa(char c[]){
	c[0] = toupper(c[0]);
	for(int i=1; i< strlen(c); i++){
		c[i]= tolower(c[i]);
	}
}
int main(){
	int t; scanf("%d",&t);
	scanf("\n");
	while(t--){
		char c[80];
		gets(c);
		char a[80][80];
		int n=0;
		char *token= strtok(c, " ");
		while(token != NULL){
			strcpy(a[n], token);
			++n;
			token= strtok(NULL, " ");
		}
		for(int i=0; i<n; i++){
		    chuanhoa(a[i]);
			printf("%s",a[i]);
			if(i < n-1){
				printf(" ");
			}	
		}
		printf("\n");
	}
}

