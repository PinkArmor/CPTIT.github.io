#include <stdio.h>
#include <math.h>
int main(){
	int n,m; scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++){
		int cnt=i;
		for(int j=1; j<=m; j++){
			if(j>=i){
				printf("%d",cnt);
				++cnt;
			}
			else {
				printf("%d",cnt);
				--cnt;
			}
		}
		printf("\n");
	}
}
