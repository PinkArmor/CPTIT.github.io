#include<stdio.h>
#include<math.h>
int main(){
	int n; scanf("%d",&n);
	int a[n];
	int t;
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&t);
	for(int i=n-t; i<n; i++){
		printf("%d ",a[i]);
	}
	for(int i=0; i<n-t; i++){
		printf("%d ",a[i]);
	}
}
