#include<stdio.h>
#include<math.h>
int prime(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int cnt[1000001];
int main(){
	int t; scanf("%d",&t);
	for(int j=1; j<=t; j++){
		int n; scanf("%d",&n);
		int a[n];
		for(int i=0; i<n ; i++){
			scanf("%d",&a[i]);
		}
		int max=0;
		for(int i=0; i<n; i++){
			cnt[a[i]]++;
		}
		printf("Test %d:\n",j);
		for(int i=0; i<n; i++){
			if(cnt[a[i]] !=0){
				if(prime(a[i])==1){
					printf("%d xuat hien %d lan\n",a[i], cnt[a[i]]);
				}
				cnt[a[i]]=0;
		    }
		}
	}
}
