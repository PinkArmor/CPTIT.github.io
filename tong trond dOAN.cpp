#include <stdio.h>
#include <math.h>
int main(){
	int m,n;
	int sum=0;
	scanf("%d%d", &m,&n);
	if(m < n){
	
	for(int i=m ; i<=n ; i++){
		sum+=i;
	}
	printf("%d",sum);
}
else if(m > n){
	for(int i=m ; i>= n; i--){
		sum+=i;
	}
	printf("%d", sum);
}
}
