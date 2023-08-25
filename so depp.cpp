#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool prime(int n){
	if(n ==0 || n ==1){
		return false;
	}
	for(int i=2; i<= sqrt(n); i++){
		if(n % i==0){
			return false;
		}
	}
	return true;
}
int dem(int n){
	int sum=0;
	while(n){
		sum += n%10;
		n/=10;
	}
	return sum;
}
bool fibo(int n){
	n = dem(n);
	int fn1=1, fn2=0,fn;
	for(int i=2; i<=92 ;i++){
		fn=fn1+fn2;
		if(fn==n){
			return true;
		}
		fn2=fn1;
		fn1=fn;
	}
	return false;
}

int main(){
	int a,b; scanf("%d%d",&a,&b);
	if(a < b){
		for(int i=a; i<=b; i++){
		if(prime(i) && fibo(i)){
			printf("%d ",i);
		}
	}
	}
	else if(a > b){
		for(int i=b; i<=a ; i++){
		if(prime(i) && fibo(i)){
			printf("%d ",i);
		}
	}
	}
}
