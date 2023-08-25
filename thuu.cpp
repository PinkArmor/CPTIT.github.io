#include<stdio.h>
#include<math.h>
int gcd(int a, int b){
	while(b){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}


int main(){
	int test,a,b;
	scanf("%d",&test);
	
	while(test--){
	scanf("%d%d",&a,&b);
    int n=gcd(a,b);
	printf("%d %d",(a/n)*b, gcd(a,b));
    printf("\n");
	}

}
