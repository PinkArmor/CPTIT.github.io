#include<stdio.h>
#include<math.h>
int dx(int a[], int n){
	int l=0, r=n-1;
	while(l <= r){
		if(a[l] != a[r]){
			return 0;
		}
	    ++l; --r;
	}
	return 1;
}
int main(){
	int n,test; 
	scanf("%d", &test);
	while(test--){
		scanf("%d",&n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d",&a[i]);
		}
		if(dx(a,n)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
