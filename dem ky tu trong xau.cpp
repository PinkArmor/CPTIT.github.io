#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char c[1005];
    fgets(c, 1005 , stdin);
    c[strlen(c)-1] = '\0';
    int cnt1=0, cnt2=0;
    for(int i=0; i< strlen(c); i++){
    	if(isalnum (c[i])){
    		if(isalpha(c[i])){
    			++cnt1;
			}
			else if(isdigit(c[i])){
				++cnt2;
			}
		}
	}
	printf("%d %d %d",cnt1,cnt2, strlen(c)-cnt1-cnt2);
}