#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main(){
	char s[200];
	gets(s);
    int n = strlen(s);
	int yes =1;
	if(n % 2 !=0){
		yes=0;
	}
	else{
	for(int i=0; i<strlen(s); i++){
		if(s[i] == '(') s[i] = ')';
		if(s[i] == '[') s[i] = ']';
		if(s[i] == '{') s[i] = '}';
	   }
    }
    for(int i=0; i<= n/2; i++){
    	if(s[i] != s[n-i-1]){
    		yes=0;
    		break;
		}
	}
	if(yes){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
}
