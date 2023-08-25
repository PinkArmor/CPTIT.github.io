#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d",&n);
	int a[100];
	int x=1, cnt=0;
	if(n==0){
		printf("0");
	}
	while(n !=0){
		int m= n%2;
		a[x]=m;
		n/=2;
		x++;
		cnt++;
	}
	for(int i=cnt; i>0; i--){
		printf("%d",a[i]);
	}
}
