#include<stdio.h>
#include<math.h>
int main(){
	int n,min1, min2; 
	scanf("%d",&n);
	int a[n];
	min1=1e5;
	min2=1e5;
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n ;i++){
		if(min1 > a[i]){
			min2 =min1;
			min1=a[i];
		}
	}
	printf("%d ", min1);
	for(int i=0; i<n; i++){
		if(min2> a[i] && a[i] != min1){
			min2=a[i];
		}
	}
	printf("%d", min2);
}
