#include<stdio.h>
#include<math.h>
int main(){
	int n; scanf("%d",&n);
	for(int i=1; i<=n; i++){
		int a,b; scanf("%d%d",&a,&b);
		int arr[a][b];
		for(int x=0; x<a; x++){
			for(int j=0; j<b; j++){
				scanf("%d",&arr[x][j]);
			}
		}
		printf("Test %d:\n",i);
		for(int x=1; x<a; x++ ){
			for(int j=1; j<b; j++){
				printf("%d ",arr[x][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
