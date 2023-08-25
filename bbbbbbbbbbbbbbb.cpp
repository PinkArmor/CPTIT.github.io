#include<stdio.h>
#include<math.h>
int main(){
	int t; scanf("%d",&t);
	while(t--){
		long long n; 
		scanf("%lld",&n);
		long long m=n;
		int cnt_even=0;
		int cnt_odd=0;
		int dem=0;
		while(n){
			dem= n%10;
			if(dem % 2==0) ++cnt_even;
			else ++cnt_odd;
			n/=10;
		}
		if(m %2 ==1 && cnt_odd > cnt_even){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}