#include <stdio.h>
#include <math.h>
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int even=0, odd=0, n=0;
		char so =' ';
		while(so != '\n'){
			int x; scanf("%d",&x);
			++n;
			if(x%2==0){
				++even;
			}
			else ++odd;
			so = scanf("\n");
		}
		if((n%2==0 && even > odd) || (n%2!=0 && even < odd)){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}
