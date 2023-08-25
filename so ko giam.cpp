#include<stdio.h>
#include<math.h>
int check(long long n){
	long long x= n%10;
        n/=10;	
	while(n){
		if(x < n%10){
			return 0;
		}
	x= n%10;
	n/=10;
    }
	return 1;
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		long long n;
		scanf("%lld",&n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}
