#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool check(int n){
	if(n==0 || n==1){
		return false;
	}
		for(int i=2; i<= sqrt(n); i++){
			if(n % i==0){
				return false;
			}
	}
	return true;
}
int main(){
	int n; 
	int test;
	scanf("%d",&test);
	while(test--){
		scanf("%d", &n);
		
		if(check(n)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
