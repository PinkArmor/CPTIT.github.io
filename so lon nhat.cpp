#include<stdio.h>
#include<math.h>
int main(){
	int n,test, a[100], p[100],	count ,max;
	scanf("%d",&test);
	while(test--){
		scanf("%d",&n);
		max=-1;
		count=0;
		for(int i=0; i<n; i++){
			scanf("%d",&a[i]);
			if(a[i] > max){
				max=a[i];
				count =0;
			}
			if(a[i]==max){
				p[count++] =i;
			}
		}
		printf("%d\n",max);
		for(int i=0; i<count; i++){
			printf("%d ",p[i]);
		}
		printf("\n");
	}
}
