#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char s1[1001];
	gets(s1);
	char *token = strtok(s1," ");
	char a[100][100]; int n=0;
	while(token != NULL){
		strcpy(a[n], token);
		++n;
		token= strtok(NULL, " ");
	}
	int cnt[105]={0};
	for(int i=0; i<n; i++){
		cnt[i]=1;
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(a[i],a[j])==0){
				cnt[j]=0;
			}
		}
	}
	for(int i=0; i<n; i++){
		if(cnt[i]){
			printf("%s",a[i]);
			printf(" ");
		}
	}
}
