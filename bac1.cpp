#include <stdio.h>
#include <math.h>
int main (){
	int a,b;
	scanf("%d%d", &a, &b);
	if(a==0 && b==0){
		printf("Vo so nghiem");
	}
	else if(a==0 && b!=0){
		printf("Vo nghiem");
	}
	else{
		float x =-1.0*b/a;
		printf("%.2f", x);
	}
}
