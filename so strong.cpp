#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int gt(int n){
	int tich=1;
	for(int i=1; i<=n ; i++){
		tich *=i;
	}
	return tich;
}
bool check(int n){
	int sum=0, m=n;
	while(n){
		int r=n%10;
		sum+= gt(r);
		n/=10;
	}
	if(sum ==m){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	if(check(n)){
		printf("1");
	}
	else{
		printf("0");
	}
}


