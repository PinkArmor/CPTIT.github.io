#include <stdio.h>
#include <math.h>
int min(int a, int b){
	if(a>b) return b;
	else return a;
}
int main(){
	int n,m; scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++){
		printf("%d",i);
		for(int j=1; j<m; j++){
			if(j <= m-i){
				printf("%d",i+j);
			}
			else {
				int tmp = min(i-1, m-1);
				while(j<m) {
					printf("%d",tmp--); ++j;
				}
			}
		}
		printf("\n");
	}
}
