#include <stdio.h>
#include <math.h>
int main(){
	int n, test;
	scanf("%d",&test);
	
	while(test--){
		scanf("%d",&n);
		int a= sqrt(n);
		if(n == pow(a,2)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
    
}
