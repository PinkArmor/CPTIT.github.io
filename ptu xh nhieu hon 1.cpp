#include<stdio.h>
#include<math.h>
int cnt[1000005];
int main(){
	int n; scanf("%d",&n);
	int a[n];
	int max= -1e9;
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
		if(a[i] > max)
		max=a[i];
	}
	for(int i=0; i<n; i++){
		cnt[a[i]]++;
	}
	int dem=0;
	for(int i=0; i<max; i++){
		if(cnt[a[i]] > 1){
			++dem;
		}
	}
	printf("%d\n",dem);
	for(int i=0; i<n; i++){
		if(cnt[a[i]]>=2){
			printf("%d " ,a[i]);
			cnt[a[i]]=0;
		}
	}
	
}
