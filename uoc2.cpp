#include <stdio.h>
#include <math.h>
int dem(int n){
	int ans=0;
	for(int i=1; i<= sqrt(n) ; i++){
		if(n % i ==0){
			if(i % 2==0) ++ans;
			if(i != n/i && n/i % 2==0) ++ans;
			}
		}
		return ans;
	}
	
int main(){
	int test; scanf("%d",&test);
	while(test--){
		int n; scanf("%d", &n);
		printf("%d\n", dem(n));
	}
}	

