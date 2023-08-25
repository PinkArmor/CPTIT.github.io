#include<stdio.h>
#include<math.h>
int main(){
	int n,t; scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	int a[n];
	int max=-1e9;
	int count=0;
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		if(a[i] >= max){
			++count;
			max=a[i];
		}
	}
	printf("%d\n", count);
}
}
