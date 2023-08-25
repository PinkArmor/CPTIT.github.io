#include<stdio.h>
#include<math.h>
int prime(int n){
	if(n==0 || n==1){
		return 0;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int a[100];
	int test,n; scanf("%d",&test);
	while(test--){
		scanf("%d",&n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n ; i++){
			if(prime(a[i])){
				printf("%d ", a[i]);
			}
		}
	}
	printf("\n");
}
