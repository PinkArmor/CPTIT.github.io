#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
	char c[100];
	char a[50][50];
	int n=0;
	gets(c);
	for(int i=0; i<strlen(c); i++){
		c[i] = tolower(c[i]);
	}
	char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a[n], token);
		token = strtok(NULL, " ");
		++n;
	}
	int cnt[10000];
	for(int i=0; i<n; i++){
		cnt[i]=1;
	}
	for(int i=0; i<n; i++){
	   for(int j=i+1; j<n; j++){
	   	if(strcmp(a[i],a[j])==0 && cnt[i] !=0){
	   		cnt[j]=0;
	   		cnt[i]++;
		   }
	   }
	}
	for(int i=0; i<n; i++){
		if(cnt[i] !=0){
			printf("%s %d\n", a[i], cnt[i]);
		}
	}
	
}

