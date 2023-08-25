#include <stdio.h>
#include <math.h>
long long gcd(long long a,long long b){
	while(b){
		int r= a%b;
		a=b;
		b=r;
	}
	return a;
}
long long lcm (long long a,long long b){
	return  a/gcd(a,b) *b;
}
int main(){
	long long a,b; scanf("%lld%lld",&a,&b);
	long long GCD= gcd(a,b);
	long long LCM= lcm(a,b);
	printf("%d\n",GCD);
	printf("%d\n",LCM);
}
