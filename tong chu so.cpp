#include<stdio.h>
#include<math.h>
int main(){
	int n,test;
	scanf("%d" , &test);
	
	while(test--){
		scanf("%d",&n);
		int sum=0;
		while(n){
			sum += n%10;
			n/=10;
		}
	printf("%d", sum);	
	}
	

}
