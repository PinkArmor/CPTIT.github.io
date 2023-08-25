#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int dc(char c[]){
	for(int i=0; i< strlen(c); i++){
		if(c[0]-'0'== 2* (c[strlen(c)-1]-'0') || 2*(c[0]-'0') == c[strlen(c)-1]-'0'  ){
			return 1;
		}
		
	}
	return 0;
}
int thuan_nghich(char c[]){
	int len = strlen(c);
	for(int i=0; i<= len/2; i++){
		if(c[i] != c[len-i-1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t; scanf("%d",&t);
	scanf("\n");
	while(t--){
		char c[20];
		gets(c);
		if(thuan_nghich(c) && dc(c)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
