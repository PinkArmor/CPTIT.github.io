#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int cmp1 (void const *a,void const *b){
	int *x= (int *)a;
	int *y= (int *)b;
	if(*x >*y){
		return 1;
	}
	return -1;
}
int cmp2 (void const *a,void const *b){
	int *x= (int *)a;
	int *y= (int *)b;
	if(*x >*y){
		return -1;
	}
	return 1;
}
int main(){
	int t; scanf("%d",&t);
	for(int k=1; k<=t; k++){
		int n; scanf("%d",&n);
		int a[n]; 
		int b[n];
		for(int i=0; i<n; i++){
			scanf("%d",&a[i]);
		}
		for(int i=0; i<n; i++){
			scanf("%d",&b[i]);
		}
		qsort(a,n,sizeof(int),cmp1);
		qsort(b,n,sizeof(int),cmp2);
		printf("Test %d:\n",k);
		int c[2*n];
		int ai=0, bi=0;
		for(int i=0; i< 2*n; i++){
			if(i% 2==0){
				c[i]= a[ai];
				ai++;
			}
			else{
				c[i]= b[bi];
				bi++;
			}
		}
		for(int i=0; i< 2*n; i++){
			printf("%d ",c[i]);
		}
		printf("\n");
	}
}
