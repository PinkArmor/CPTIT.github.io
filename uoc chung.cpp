#include <stdio.h>
#include <math.h>
int gcd(int a, int b){
	while(b){
		int r= a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(){
	int a,b,test;
	scanf("%d",&test);
	while(test--){
	scanf("%d%d",&a ,&b); 
	printf("%d\n", gcd(a,b));
}
}
