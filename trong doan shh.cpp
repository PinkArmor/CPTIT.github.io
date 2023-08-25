#include<stdio.h>
#include<math.h>
int shh(int n){
	int sum=0;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i==0){
			sum += i;
			if(i != n/i){
				sum += n/i;
			}
		}
	}
	sum -= n;
	if(sum==n){
		return sum;
	}
	else{
		return 0;
	}
}
int main(){
	int a,b; scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a; i<=b; i++){
			if(shh(i)){
				printf("%d ",i);
			}
		}
	}
	if(a>b){
		for(int i=a; i>=b; i--){
			if(shh(i)){
				printf("%d ",i);
			}
		}
	}
}
