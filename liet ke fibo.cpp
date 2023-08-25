#include<stdio.h>
#include<math.h>
void fibo(int n){
	printf("0 1 ");
	int fn1=1, fn2=0, fn;
	for(int i=2; i<=n; i++){
		fn=fn1+fn2;
		printf("%d ",fn);
		fn2=fn1;
		fn1=fn;
	}
}
int main(){
	int n; scanf("%d", &n);
	fibo(n-1);
}
