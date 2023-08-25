#include <stdio.h>
#include <math.h>
int main(){
	int t; scanf("%d",&t);
	while(t--){
		long long n; scanf("%lld",&n);
		long long a=0, b=0, max =0 ;
		for(long long i=2; i<= sqrt(n); i++){
			if(n%i==0){
				while(n%i==0){
				   	n/=i;
				}
				a=i;
			}
		}
		if(n>1){
			b=n;
		}
		if(a> b){
            max=a;		  
		  	printf("%lld\n",a);
		}
		if(b >a ){
			max=b;
			printf("%lld\n",b);
		}
	}
}
