#include<stdio.h>
#include<math.h>
int cnt[1000001];
int main(){
	int n; scanf("%d",&n);
	int a[n];
	int dem=0;
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(int i=0; i<n; i++){
		cnt[a[i]]++;
	}
	for(int i=0; i<n; i++){
		if(cnt[a[i]] == 1){
			++dem ;
		}
		
	}
	printf("%d\n",dem);
	for(int i=0; i<n; i++){
		if(cnt[a[i]]==1){
			printf("%d ",a[i]);
		}
	}
}
