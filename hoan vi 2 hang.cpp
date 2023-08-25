#include <stdio.h>
#include <math.h>
void swap(int *a, int *b){
	int tmp =*a;
	*a = *b;
	*b = tmp;
}
int main(){
	int n,m; scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d",&a[i][j]);
		}
	}
	int x,y; scanf("%d%d",&x,&y);
	
		for(int j=0; j<m; j++){
			swap(&a[x-1][j], &a[y-1][j]);
		}

     for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
