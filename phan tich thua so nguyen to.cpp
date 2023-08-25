#include <stdio.h>
#include <math.h>
int main(){
	int n,test;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
	    if(n ==1 ){
	    	printf("1");
		}
		for(int i=2; i<= sqrt(n); i++){
	    	if(n%i ==0){
	    	    while(n %i==0){
	    			printf("%d ", i);
	    			n/=i;
			    }
			}
			if(n !=1){
				printf("%d ",n);
			}
	   }
	printf("\n");
    }
}
