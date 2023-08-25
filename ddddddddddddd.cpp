#include<stdio.h>
#include<math.h>
int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long n; scanf("%lld",&n);
        int cnt_even=0;
        int cnt_odd=0;
        int dem=0;
        while(n){
            dem = n%10;
            if(dem % 2!=0){
                ++cnt_odd;
            }
            else ++cnt_even;
            n/=10;
        }
        if(n%2 !=0 && cnt_odd > cnt_even){
        	printf("YES");
		}
		else {
			printf("NO");
		}
    }
}
