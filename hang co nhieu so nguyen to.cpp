#include <stdio.h>
#include <math.h>
int prime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n; scanf("%d",&n);
	int a[n][n];
	int hang, max;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0; i<n; i++){
	    int cnt=0;
		for(int j=0; j<n; j++){
			if(prime(a[i][j])){
				++cnt;
			}
			
		}
		if(cnt > max){
				max = cnt; 
				hang = i;
			}
	}
	printf("%d\n",hang+1);
	for(int j=0; j<n; j++){
		if(prime(a[hang][j])){
			printf("%d ",a[hang][j]);
		}
	}
}
