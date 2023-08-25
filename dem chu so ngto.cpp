#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int prime(int n){
	if(n ==0 || n==1) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	char c[20];
	scanf("%s",c);
	int dem[10]={0};
	for(int i=0; i< strlen(c); i++){
		if(c[i]=='2' || c[i]=='3' || c[i]=='5' || c[i]=='7'){
			dem[c[i] - '0']++;
		}
	}
	for(int i=0; i< strlen(c); i++){
		if(dem[c[i]-'0'] !=0){
			printf("%c %d\n", c[i], dem[c[i]-'0']);
			dem[c[i]-'0']=0;
		}
	}
}
