#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int sum=1;
	scanf("%d", &n);
	while(n){
		sum *= n%10;
		n/=10;
	}
	printf("%d", sum);
}
