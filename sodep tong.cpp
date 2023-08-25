#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int thuan_nghich(char c[]){
	int len = strlen(c);
	for(int i=0; i<=len/2; i++){
		if(c[i] != c[len -i-1])
		return 0;
	}
	return 1;
}
int dc(char c[]){
	int len = strlen(c);
	for(int i=0; i<len ; i++){
		if(c[0] != '8' && c[len-1] != '8'){
			return 0;
		}
	}
	return 1;
}
int sum(char c[]){
	int len = strlen(c);
	int tong=0;
	for(int i=0; i<len ; i++){
		tong += c[i]-'0';
	}
	if(tong % 10!=0){
		return 0;
	}
	return 1;
}
int main(){
    int t; scanf("%d",&t);
    scanf("\n");
    while(t--){
     char c[509];
     gets(c);
     if(thuan_nghich(c) && sum(c) && dc(c)){
    	printf("YES\n");
	}
	else printf("NO\n");
}
}
