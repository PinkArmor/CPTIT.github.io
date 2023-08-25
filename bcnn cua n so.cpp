
#include<stdio.h>
#include<math.h>
int gcd(long long a, long long b){
	while(b !=0){
		long long x= a%b;
		a=b;
		b=x;
	}
	return a;
}
int lcm(long long a, long long b){
	return (a/gcd(a,b))*b;
}
int main(){
    long long n; scanf("%lld",&n);
    long long ans=1;
    for(int i=2; i<=n; i++){
        ans = lcm(ans,i);
    }
    printf("%lld",ans);
}
