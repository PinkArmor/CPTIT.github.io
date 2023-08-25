#include <stdio.h>
#include <math.h>
int min(int a, int b){
	if(a>b) return b;
	else return a;
}
int main(){
	int n; scanf("%d",&n);
	for(int i=1; i<=2*n-1; i++){
		for(int j=1; j<=2*n-1; j++){
			int vmin = min(min(i-1,2*n-1-i), min(j-1, 2*n-1-j));
			printf("%d",n-vmin);
		}
		printf("\n");
	}
}
