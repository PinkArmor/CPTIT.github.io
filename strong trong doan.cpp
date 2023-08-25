#include<stdio.h>
#include<math.h>
long long gt(long long n){
	long long res=1;
	for(int i=1; i<=n; i++){
		res *=i;
	}
	return res;
}
int shh(int n){
	int sum=0, m=n;
	while(n){
		int r=n%10;
		sum += gt(r);
		n/=10;
	}
	if(sum ==m ){
		return sum;
	}
	else{
		return 0;
	}
}
int main(){
	int a,b; scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a; i<=b; i++){
			if(shh(i)){
				printf("%d ",i);
			}
		}
	}
	if(a>b){
		for(int i=a; i>=b; i--){
			if(shh(i)){
				printf("%d ",i);
			}
		}
	}
}
