#include <stdio.h>
#include <math.h>
int main(){
	int n,test;
	scanf("%d", &test);
	while(test--){
		scanf("%d",&n);
		int dem=0;
		int count_odd=0;
		int count_even=0;
		while(n){
			dem=n%10;
			if(dem%2 !=0){
				++count_odd;
			}
			else if(dem%2 ==0){
				++count_even;
			}
			else{
				printf("0");
			}
			n/=10;
			
		}
		printf("%d %d\n",count_odd, count_even);
	}
}
