#include <stdio.h>
int main(){
	int n,m; scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++){
		int tmp =i;
		for(int j=1; j<=m; j++){
			if(j <= m-i){
				printf("%d",tmp);
				++tmp;
			}
			else {
				printf("%d",tmp);
				--tmp;
			}
		}
		printf("\n");
	}
}
