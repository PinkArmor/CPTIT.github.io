#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
	int *x= (int *)a;
	int *y= (int *)b;
	if(*x< *y){
		return -1;
	}
	return 1;
}
int main(){
	int n,m; scanf("%d%d",&n,&m);
	int a[n], b[m];
	int cnt1[10001];
	int cnt2[10001];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
		cnt1[a[i]]=1;
	}
	for(int i=0; i<m; i++){
		scanf("%d",&b[i]);
		cnt2[b[i]]=1;
	}
	qsort(a,n,sizeof(int),cmp);
	qsort(b,n,sizeof(int),cmp);
	for(int i=0; i<1000; i++){
		if(cnt1[i]==1 && cnt2[i]==1){
			printf("%d ",i);
		}
	}
	printf("\n");
	for(int i=0; i<1000; i++){
		if(cnt1[i]==1 && cnt2[i]==0){
			printf("%d ",i);
		}
	}
	printf("\n");
	for(int i=0; i<1000; i++){
		if(cnt1[i]==0 && cnt2[i]==1){
			printf("%d ",i);
		}
	}
}
