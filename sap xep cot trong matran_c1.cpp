#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
	int *x= (int *)a;
	int *y= (int *)b;
	if(*x < *y){
		return -1;
	}
	return 1;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n,m; scanf("%d%d",&n,&m);
		int a[n][m];
		int k; scanf("%d",&k);
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(a[j][k-1] < a[i][k-1]){
					int tmp = a[j][k-1];
					a[j][k-1] = a[i][k-1];
					a[i][k-1] = tmp;
				}
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
}
