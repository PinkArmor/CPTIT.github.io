#include <stdio.h>
#include <math.h>
int main(){
	int n; scanf("%d", &n);
	int* address_n= &n;
	printf("%x\n", address_n);
	printf("%d", *address_n);
}
