#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int kiem(char c[]){
	int cnt_e =0, cnt_o=0;
	for(int i=0; i<strlen(c); i++){
		int digit = c[i] - '0';
		if(digit % 2 ==0){
			++cnt_e;
		}
		if(digit % 2 != 0){
			++cnt_o;
		}
	}
	if(cnt_e > cnt_o && strlen(c) % 2==0){
		return 1;
	}
	if(cnt_e < cnt_o && strlen(c) % 2!=0){
		return 1;
	}
	if(cnt_e == cnt_o){
		return 0;
	}
}
int main(){
	int t; scanf("%d",&t);
	scanf("\n");
	while(t--){
		char c[1001];
		gets(c);
		int check=1;
		int cnt[10] ={0};
		for(int i=0; i<strlen(c); i++){
			if(c[0]-'0' ==0 || (!isdigit(c[i])) ){
				printf("INVALID\n");
				check=-1;
				break;
			}
			cnt [c[i] - '0']++;
		}
		if(check != -1){
			
			if(kiem(c)==1 && check==1){
				printf("YES\n");
			}
			if(kiem(c)==0){
				printf("NO\n");
			}
		}
	}
}
