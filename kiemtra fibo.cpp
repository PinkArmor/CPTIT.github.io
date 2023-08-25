#include <stdio.h>
#include <math.h>
long long fibo(long long n){
	if(n ==0 || n==1){
		return 1;
	}
	long long fn1=1, fn2=0, fn;
	for(int i=0; i<= 92; i++){
		fn= fn1+fn2;
		if(fn == n){
			return 1;
		}
		fn2=fn1;
		fn1=fn;
	}
	return 0;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		if(fibo(n)==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
