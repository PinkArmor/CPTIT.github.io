#include <stdio.h>
#include <math.h>
int prime(int n){
	for(int i=2; i<= sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int check(int n){
	int sum=0;
	while(n){
		int x= n%10;
		if(prime(x)==0){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int check1(int n){
	int sum=0;
	while(n){
		sum += n%10;
		n/=10;
	}
	if(prime(sum)==1) return 1;
	else return 0;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int a,b; scanf("%d%d",&a,&b);
		int cnt=0;
		for(int i=a; i<=b; i++){
			if(check(i)==1 && check1(i)==1 && prime(i)){
				++cnt;
			}
	    }
	    printf("%d\n",cnt);
	}
}
