#include<stdio.h>
#include<math.h>
int check(int n){
	int r= n%10;
	n/=10;
	while(n != 0){
		if(r >= n%10){
			return 0;
		}
		r= n%10;
		n/=10;
	}
	return 1;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int dem=0;
		int a,b; scanf("%d%d",&a,&b);
		for(int i=a; i<=b; i++){
			if(check(i)==1){
				++dem;
			}
		}
		printf("%d\n",dem);
	}
}
