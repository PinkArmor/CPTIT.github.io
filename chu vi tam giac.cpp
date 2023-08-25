#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct tamgiac{
	double xa, ya, xb, yb, xc, yc; 
};
typedef struct tamgiac tg;
void nhap(tg *x){
	scanf("%lf%lf%lf%lf%lf%lf",&x->xa, &x->ya, &x->xb, &x->yb, &x->xc, &x->yc);
}
int check(tg x){
    double ab = sqrt(pow(x.xa-x.xb, 2)+ pow(x.ya-x.yb, 2));
    double bc = sqrt(pow(x.xb-x.xc, 2)+ pow(x.yb-x.yc, 2));
    double ca = sqrt(pow(x.xc-x.xa, 2)+ pow(x.yc-x.ya, 2));
    if(ab+bc <= ca || ab+ca <= bc || bc+ca <= ab){
    	return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d",&t);
	while(t--){
		tg x;
		double c;
		nhap(&x);
		double ab = sqrt(pow(x.xa-x.xb, 2)+ pow(x.ya-x.yb, 2));
        double bc = sqrt(pow(x.xb-x.xc, 2)+ pow(x.yb-x.yc, 2));
        double ca = sqrt(pow(x.xc-x.xa, 2)+ pow(x.yc-x.ya, 2));
		if(check(x)==0){
			printf("INVALID\n");
		}
		if(check(x)==1){
			c = ab + bc + ca;
			printf("%.3lf\n",c);
		}
	}
}
