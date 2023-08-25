#include<stdio.h>
#include<math.h>
int ucln(int a, int b){
	while(b){
		int r= a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(){
	int a,b; scanf("%d%d", &a,&b);
	for(int i=a; i<b; i++){
		for(int j=a+1; j<=b; j++){
			if(ucln(i,j) ==1){
				if(i<j){
					printf("(%d,%d)",i,j);
				printf("\n");
				}
			}
		}
	}
}
