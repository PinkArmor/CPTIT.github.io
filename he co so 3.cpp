#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int he(char c[]){
	for(int i=0; i< strlen(c); i++){
		if(c[i] != '0' && c[i] != '1' && c[i] != '2')
		return 0;
	}
	return 1;
}
int main(){
	int t; scanf("%d",&t);
	scanf("\n");
	while(t--){
	 char c[100];
	 gets(c);
	 if(he(c)) printf("YES\n");
	 else printf("NO\n");
}
}
