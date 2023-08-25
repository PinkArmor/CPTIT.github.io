#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	int delta= b*b - 4*a*c;
	float x= -1.0*b/2*a;
	float x1 = 1.0*(-1.0*b+ sqrt(delta)) / (2*a);
	float x2 = 1.0*(-1.0*b- sqrt(delta)) / (2*a);
	if(delta <0){
		printf("NO");
	}
	else if(delta == 0){
		printf("%.2f", x);
	}
	else if(delta >0){
		printf("%.2f %.2f", x1,x2);
	}
}
