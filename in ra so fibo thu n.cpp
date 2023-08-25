#include<stdio.h>
#include<math.h>
int fibo( int n){
	if(n==0) return 0;
	if(n==1) return 1;
	int fn1=1, fn2=0, fn;
	for(int i=2; i<=n ; i++){
		fn= fn1+fn2;
		fn2=fn1;
		fn1=fn;
	}
	return fn;
}
int main(){
	int n,test; scanf("%d", &test);
	while(test--){
		scanf("%d",&n);
		printf("%d\n",fibo(n));
	}
	
}
