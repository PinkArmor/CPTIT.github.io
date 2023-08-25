#include<stdio.h>
#include<math.h>
int so_bon(int n){
	while(n){
		int r=n%10;
		if(r==4){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int thuan_nghich(int n){
	int m=n;
	int dem=0;
	while(n){
	   dem= dem*10 + n%10;
	   n/=10; 
	}
	if(dem==m){
		return 1;
	}
	return 0;
}
int chia(int n){
	int num=0;
	while(n){
		num += n%10;
		n/=10; 
	}
	if(num % 10==0){
		return 1;
	}
	return 0;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		int a= pow(10, n-1), b=pow(10,n);
		for(int i=a; i<=b; i++){
			if(so_bon(i) && thuan_nghich(i) && chia(i)){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}

