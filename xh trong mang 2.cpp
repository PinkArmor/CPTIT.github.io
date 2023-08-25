#include<stdio.h>
#include<math.h>
int cnt[10000001];
int main(){
	int t; scanf("%d",&t);
	for(int j=1; j<= t ; j++){
		int n; scanf("%d",&n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d",&a[i]);
		}
		for(int i=0; i<n; i++){
			cnt[a[i]]++;
		}
		printf("Test %d:\n",j);
		for(int i=0; i<n; i++){
			if(cnt[a[i]] != 0){
				printf("%d xuat hien %d lan",a[i], cnt[a[i]]);
				printf("\n");
				cnt[a[i]]=0;
			}
		}
	}
}
