#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
void cut(char c[]){
	int len= strlen(c);
	for(int i=0; i<len ; i++){
		if(c[i]== '0' || c[i]=='1' || c[i]=='8' || c[i]=='9'){
			if(c[i]=='8' || c[i]=='9'){
				c[i]='0';
			}
		}
		else{
			printf("INVALID\n"); return;
		}
	}
	int cnt=0;
	while(c[cnt] == '0'){
		++cnt;
	}
	if(cnt == strlen(c)){
		printf("INVALID\n");
	}
	else{
		for(int i=cnt ; i< strlen(c); i++){
			printf("%c",c[i]);
		}
		printf("\n");
	}
	
}
int main(){
	int t; scanf("%d",&t);
	scanf("\n");
	while(t--){
		char c[20];
		gets(c);
		cut(c);
	}
}
