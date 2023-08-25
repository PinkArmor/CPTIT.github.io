#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int thuan_nghich(char c[]){
	int len= strlen(c);
	for(int i=0; i< len/2; i++){
		if(c[i] != c[len -i-1]){
			return 0;
		}
	}	
	return 1;
}

int check(char c[]){
	for(int i=0; i< strlen(c); i++){
		if(c[i] == '2' || c[i] == '3' || c[i] == '5'|| c[i] == '7'){
			return 1;
		}
	}
	return 0;
}
int main(){
	int t; scanf("%d",&t);
	scanf("\n");
	while(t--){
		char c[505];
		gets(c);
		if(thuan_nghich(c) && check(c)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}

