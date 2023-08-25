#include <stdio.h>
#include <math.h>
#include <string.h>
struct dientich{
	double xa, ya, xb, yb, xc, yc;
};
typedef struct dientich dt;
void nhap(dt *x){
	scanf("%lf%lf%lf%lf%lf%lf",&x->xa, &x->ya, &x->xb, &x->yb, &x->xc, &x->yc);
}
int check(dt x){
	double ab= sqrt(pow(x.xa-x.xb, 2) + pow(x.ya-x.yb, 2));
	double bc= sqrt(pow(x.xb-x.xc, 2) + pow(x.yb-x.yc, 2));
	double ca= sqrt(pow(x.xc-x.xa, 2) + pow(x.yc-x.ya, 2));
	if(ab+bc <= ca || ab+ca<=bc || bc+ca<=ab){
		return 0;
	}
	return 1;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		dt x;
		double s;
		nhap(&x);
		double ab= sqrt(pow(x.xa-x.xb, 2) + pow(x.ya-x.yb, 2));
	    double bc= sqrt(pow(x.xb-x.xc, 2) + pow(x.yb-x.yc, 2));
	    double ca= sqrt(pow(x.xc-x.xa, 2) + pow(x.yc-x.ya, 2));
	    double p = (ab+bc+ca)/2.0;
	    if(check(x)==0){
	    	printf("INVALID\n");
		}
		if(check(x)==1){
			s = sqrt(p*(p-ab)*(p-ca)*(p-bc));
			printf("%.3lf\n",s);
		}
	}
}
