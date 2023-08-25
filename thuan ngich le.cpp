#include <stdio.h>
#include <math.h>
int thuan_nghich(int n){
	int m=n;
	int dem=0;
	while(n){
		dem= dem*10 + n%10;
		n/=10;
	}
	if(m==dem){
		return 1;
	}
	return 0;
}
int sum_odd(int n){
	int a=n;
	int sum=0;
	while(n){
		sum += n%10;
		n/=10;
	}
	if(sum % 2 ==0){
		return 0;
	}
	return 1;
}
int odd(int n){
	int cnt=0;
	int a=n;
	while(n){
		cnt = n%10;
		if(cnt % 2 ==0){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		if(thuan_nghich(n)==1 && sum_odd(n)==1 && odd(n)==1){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
