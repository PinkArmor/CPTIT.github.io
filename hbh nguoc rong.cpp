#include <stdio.h>
#include <math.h>
int main(){
	int n,m; scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			printf("~");
		}
		for(int j=1; j<=m; j++){
			if(i==1 || j==1 || i==n || j==m ||m==1){
				printf("*");
			}
			else{
				printf(".");
			}
		}
		printf("\n");
	}
}
