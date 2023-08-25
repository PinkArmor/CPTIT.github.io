#include<stdio.h>
#include<math.h>
long long prime(long long n){
	if(n <2){
		return 0;
	}
	for(long long i=2; i<=sqrt(n); i++){
		if(n % i==0)
		return 0;
	}
	return 1;
} 
int main(){
	int t; scanf("%d",&t);
	while(t--){
		long long a,b; scanf("%lld%lld",&a,&b);
		int count =0;
		for(long long i=a; i<=sqrt(b); i++){
			if(prime(i)){
				++count;
			}
		}
		printf("%d",count);
		printf("\n");
	}
}
