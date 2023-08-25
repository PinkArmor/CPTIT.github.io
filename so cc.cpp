#include<stdio.h>
#include<math.h>
int dc(long long n){
	long long dem=n %10;
	long long dom=0;
	while(n){
		dom = n%10;
		n/=10;
	}
	if(dem == 2*dom || dom == 2*dem) return 1;
	return 0;
}
int thuan_nghich(long long n){
	long long m=n;
	long long cnt=0;
	while(n){
		cnt= cnt*10 + n%10;
		n/=10;
	}
	if(cnt ==m) return 1;
	return 0;
}
int main(){
	int test; scanf("%d",&test);
	while(test--){
		long long n; scanf("%lld",&n);
		long long m=n;
		long long num=0;
		long long dem=0;
		while(n){
			num = n%10;
			n/=10;
			++dem;
		}
		
		long long k = m%10;
		long long thu = m - k - num* pow(10, dem-1);
		long long ku = thu/10;
		if(dc(m)==1 && thuan_nghich(ku)==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		
	}
}
