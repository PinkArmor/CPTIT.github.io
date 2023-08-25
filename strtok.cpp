#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t;  scanf("%d",&t);
	while(t--){
	char c[205];
	gets(c);
	char *token = strtok(c, " ");
	int cnt;
	while(token != NULL){
		++cnt;
		
		token = strtok(NULL , " ");
	}
	printf("%d\n", cnt);
	}
}
