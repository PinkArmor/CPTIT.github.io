#include <stdio.h>
#include <math.h>
long long gcd(long long a, long long b){
	while(b >0){
		long long x= a%b;
		a=b;
		b=x;
	}
	return a;
}
long long lcm(long long a, long long b){
	return (a/gcd(a,b)) * b;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		long long num=1;
		for(int i=a; i<=b; i++){
			num = lcm(num, i);
		}
		printf("%lld\n",num);
	}
}
