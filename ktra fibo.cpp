#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool fibonacci(int n){
	if(n ==0 || n ==1){
		return true;
	}
	int fn1=1,fn2=0, fn;
	for(int i=2; i<=92; i++){
		fn=fn1+fn2;
		if(fn ==n){
			return true;
		}
		fn2=fn1;
		fn1=fn;
	}
	return false;
}
int main(){
	int n; scanf("%d",&n);
	if(fibonacci(n)){
		printf("1");
	}
	else{
		printf("0");
	}
}
