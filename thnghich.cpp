#include<stdio.h>
#include<math.h>
int thuan_nghich(int n){
	int m=n;
	int num=0 ;
	while(n){
		num = num*10 + n%10;
		n/=10;
	}
	if(m==num){
		return 1;
	}
	return 0;
}
int ko_chin(int n){
	int m=n;
	while(n){
		int a= n%10;
		if(a==9) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int n; scanf("%d",&n);
	int cnt=0;
	for(int i=2; i<=n; i++ ){
		if(thuan_nghich(i) && ko_chin(i)){
			printf("%d ",i);
		}
	}
	for(int i=2; i<=n; i++ ){
		if(thuan_nghich(i) && ko_chin(i)){
			++cnt;
		}
	}
	printf("\n%d",cnt);
}
