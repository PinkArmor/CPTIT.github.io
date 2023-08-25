#include<stdio.h>
#include<math.h>
int main(){
	int t; scanf("%d",&t);
	for(int j=1; j<=t; j++){
		long long n; scanf("%lld",&n);
		printf("Test %d: ",j);
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				int dem=0;
				while(n%i==0){
					n/=i;
					++dem;
				}
				printf("%d(%d) ",i,dem);
			}
			
		}
		if(n !=1){
			printf("%lld(1)",n);
		}
		printf("\n");
	}
}
