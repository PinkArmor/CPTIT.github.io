#include<stdio.h>
#include<math.h>
int main(){
	int a,b; 
	scanf("%d%d",&a,&b);
	int n=a;
	int m=b;
	int sum_a=0;
	int sum_b=0;
	while(a){
		sum_a += a%10;
		a/=10;
	}

	while(b){
		sum_b += b%10;
		b/=10;
	}
	
	if(sum_a > sum_b){
		printf("%d %d", m,n);
	}
	else if(sum_a<sum_b){
		printf("%d %d", n,m);
	}
	else{
	    printf("%d %d",n,m);
	}
}
