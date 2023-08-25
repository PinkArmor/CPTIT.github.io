#include<stdio.h>
#include<math.h>
int prime(int n){
	if(n<2){
		return 0;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int stn(int n){
	int m=n;
	int dem=0;
	while(n){
		dem = dem*10 + n%10;
		n/=10;
	}
	if(m==dem) return 1;
	else return 0;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int dem=0;
		int a,b; scanf("%d%d",&a,&b);
		for(int i=a; i<=b; i++){
			if(prime(i) && stn(i)){
				printf("%d ",i);
				dem++;
			}
			if(dem==10){
				printf("\n");
				dem=0;
			}
		}
		printf("\n");
	}
}
