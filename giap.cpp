#include<stdio.h>
#include<math.h>
long long a[10000001];
int prime(long long n){
	if(n <2){
		return 0;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n; scanf("%d",&n);
	int i=0;
	int cnt=0;
	while(n){
		a[i]= n%10;
		n/=10;
		i++;
	}
	for(int j=i-1; j>=0; j--){
		if(prime(a[j])==1){
			++cnt;
		}
		printf("%d %d", a[j], cnt);
		printf("\n");
	}
	
	
}
