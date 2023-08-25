#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return *x-*y;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n,m,k; scanf("%d%d%d",&n,&m,&k);
		int a[n][m];
		int b[m][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%d",&a[i][j]);
				b[j][i] = a[i][j];
			}
		}
		/*/for(int i=0; i<n; i++){
			qsort(b[i], n, sizeof(int), cmp);
		}/*/
		qsort(b[k-1], n, sizeof(int), cmp);
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				printf("%d ",b[j][i]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
