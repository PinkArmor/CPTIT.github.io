#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int dem=0;
	while(n){
		n/=10;
		++dem;
	}
	printf("%d", dem);
}
