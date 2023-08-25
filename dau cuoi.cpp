#include <stdio.h>
#include <math.h>
int main(){
	int n,test;
	scanf("%d", &test);
	while(test--){
	scanf("%d", &n);
	int dem=0;
	int dom = n%10;
	while(n){
		dem = n%10;
		n /=10;
	}
    if(dem == dom){
    	printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
}
