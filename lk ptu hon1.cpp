#include<stdio.h>
#include<math.h>
int cnt[1001]={0};
int cnt1[1001]={0};
int main(){
	int n; scanf("%d",&n);
	int a[n];
	int dem=0;
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(int i=0; i<n; i++){
		cnt[a[i]]++;
		cnt1[a[i]]++;
	}
	for(int i=0; i<n; i++){
		if(cnt[a[i]] !=0){
			if(cnt[a[i]] >= 2){
				++dem;
			}
			cnt[a[i]]=0;
		}
	}
    printf("%d\n",dem);
	for(int i=0; i<n; i++){
		if(cnt1[a[i]] !=0){
			if(cnt1[a[i]] >= 2){
				printf("%d ",a[i]);
			}
			cnt1[a[i]]=0;
		}
	}
}
