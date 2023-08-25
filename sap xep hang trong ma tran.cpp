#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
	return *(int *)a -*(int *)b; 
}
int main(){
	int n,m; scanf("%d%d",&n,&m);
	int a[n][m];
	int t; scanf("%d",&t);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d",&a[i][j]);
		}
	}
    /*/for(int i=0; i<n; i++){
    	qsort(a[i], m , sizeof(int), cmp);
	}/*/
		qsort(a[t-1], m , sizeof(int), cmp);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}  
}
