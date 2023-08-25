#include<stdio.h>
#include<string.h>
#include<ctype.h>
int b[1000001];
int main(){
	int t; scanf("%d",&t);
    scanf("\n");
    while(t--){
    	char c[200];
	gets(c);
	int cnt=0;
	for(int i=0; i < strlen(c); i++){
		b[c[i]]++;
	}
	for(int i=0; i<strlen(c); i++){
		if(b[c[i]] != 0){
		printf("%c%d",c[i],b[c[i]]);
		b[c[i]]=0;
	}
	}
	printf("\n");
	}
}
