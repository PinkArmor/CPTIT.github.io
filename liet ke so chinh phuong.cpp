#include<stdio.h>
#include<math.h>
int main(){
	int m,n;
	scanf("%d%d", &m,&n);
	int dem=0;
	int a= ceil(sqrt(m));
	for(int i=a; i<=sqrt(n); i++){
	    ++dem;
	   }
	   printf("%d\n", dem);
    for(int i=a; i<=sqrt(n); i++){
    	printf("%d\n", 1ll*i*i);
	}

}
