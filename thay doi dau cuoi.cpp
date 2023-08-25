#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a=n;
	int so_cuoi= a%10;
	int so_dau=0;
	int count=0;
	while(n){
		so_dau=n%10;
		n/=10;
		++count;
	}
	int b=so_dau;
	int c=so_cuoi;
	int c1= c* pow(10,count-1);
	int a1= a-b*pow(10,count-1);
	int a2= a1/10;
	int a3=a2*10;
	int so = c1 + a3 + b;
	printf("%d",so);
}
