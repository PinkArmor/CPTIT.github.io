#include<stdio.h>
#include<math.h>
long long gt(long long n){
	long long res=1;
	for(int i=1; i<=n; i++){
		res *= i;
	}
	return res;
}
int check(int n){
	int sum=0;
	int m=n;
	while(n){
		int r=n%10;
		sum += gt(r);
		n/=10;
	}
	if(sum==m){
		return sum;
	}
	else{
		return 0;
	}
}
int main(){
	int n; scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(check(i)){
			printf("%d ",i);
		}
	}
}
