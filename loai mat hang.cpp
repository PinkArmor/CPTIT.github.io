#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
struct mathang{
	int ma;
	char ten[1000], nhom[1000];
	double mua, ban, loi;
};
typedef struct mathang mh;
 
int cmp(const void *a, const void *b){
	mh *x =(mh *)a;
	mh *y =(mh *)b;
	if(x->loi > y->loi) return -1;
	else return 1;
}
int main(){
	int n; scanf("%d",&n);
	scanf("\n");
		mh a[1000];
	for(int i=0; i<n; i++){
		scanf("\n");
		gets(a[i].ten);
		gets(a[i].nhom);
		scanf("%lf%lf",&a[i].mua,&a[i].ban);	
		a[i].ma = i+1;
		a[i].loi = a[i].ban - a[i].mua;
	}
	qsort(a,n, sizeof(mh), cmp);
	for(int i=0; i<n; i++){
		printf("%d %s %s %.2f\n",a[i].ma, a[i].ten, a[i].nhom, a[i].loi);
	}
}
