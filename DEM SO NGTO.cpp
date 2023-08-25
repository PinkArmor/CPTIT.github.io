#include<stdio.h>
#include<math.h>
int prime(int n){
	if(n==0 || n==1){
		return 0;
	} 
	for(int i=2; i<=sqrt(n); i++){
		if(n % i==0){
			return 0;
		}
	}
	return 1;
}
int tachso(int n){
	while(n){
		int x=n%10;
		if(prime(x)==0){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int a,b; scanf("%d%d",&a,&b);
    int count=0;
    for(int i=a; i<=b; i++){
        if(tachso(i) && prime(i)){
            ++count;
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("%d",count);
}
}