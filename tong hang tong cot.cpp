#include <stdio.h>
#include <math.h>
int main(){
	int n,m; scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		long long sum_h =0;
		for(int j=0; j<m; j++){
			sum_h += a[i][j];
		}
		printf("%lld ", sum_h);
	}
	printf("\n");
	for(int i=0; i<m; i++){
		long long sum_c=0;
		for(int j=0; j<n; j++){
			sum_c += a[j][i];
		}
		printf("%lld ",sum_c);
	}
}
