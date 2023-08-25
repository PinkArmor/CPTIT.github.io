#include <stdio.h>
#include <math.h>
int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int res=0, cnt=1, idx;
	for(int i=1; i<n; i++){
		if(a[i] > a[i-1]){ 
			++cnt;
		}
		else{
			cnt=1;
		}
		if(cnt >= res ){ // cnt >= res xh sau , cnt > res xh truoc
			res=cnt;
			idx= i-res+1; //i-res+1 => i co res phan tu
		}
	}
	printf("%d\n",res);
	for(int i=0; i<res; i++){
		printf("%d ",a[idx+i]); //duyet tu i-res+1 => i;
	}
}
