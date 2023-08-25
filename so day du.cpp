#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main(){
	int t; scanf("%d",&t);
	while(t--){
		char c[1000];
		scanf("%s",c);
		int n= strlen(c);
        int check=1;
		int cnt[10] ={0};		
        for(int i=0; i<n; i++){
        	if(c[0]-'0'==0 || (!isdigit(c[i])) ){
        		printf("INVALID\n");
        		check = -1;
			    break;
			}
			cnt[c[i] - '0']++;
     	}
		if(check != -1){
			for(int i=0; i<=9; i++){
				if(cnt[i]==0){
					check=0;
					break;
				}
			}
			if(check==1){
				printf("YES\n");
			}
			if(check==0){
				printf("NO\n");
			}
		}
		
	}
}
