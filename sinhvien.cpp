#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
struct sinhvien{
	char ma[100];
	char ten[100];
	double gpa;
};
typedef struct sinhvien SV;
void nhap(SV *a){
	scanf("%s",a->ma);
	scanf("\n");
	gets(a->ten);
	scanf("%lf",&a->gpa);
}
void in(SV a){
	printf("%s %s %.2lf\n",a.ma, a.ten, a.gpa);
}
void timkiem1(SV a[], int n, char m[100]){
	for(int i=0; i<n; i++){
		if(strcmp(m, a[i].ma) ==0){
			in(a[i]); return ;
		}
	}
	printf("Ko tim thay sinh vien\n");
}
void timkiem2(SV a[], int n){
	double res=0.0; int pos;
	for(int i=0; i<n; i++){
		if(a[i].gpa > res){
			res= a[i].gpa; pos=i;
		}
	}
	in(a[pos]);
}
int cmp(const void *a, const void *b){
	SV *x =(SV *)a;
	SV *y =(SV *)b;
	if(x-> gpa > y-> gpa) return -1;
	else return 1;
}
int main(){
	int n; scanf("%d",&n);
	SV a[n];
	for(int i=0; i<n; i++) nhap(&a[i]);
	//qsort(a,n, sizeof(SV), cmp);
	//for(int i=0; i<n; i++) in(a[i]);
	char s[100];
	printf("nhap ma sinh vien ban can tim:");
	scanf("%s",s);
	timkiem1(a,n,s);
	
}
