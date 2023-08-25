#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
int thuan_nghich(char c[]){
    int lenght = strlen(c);
    for(int i=0; i<= strlen(c)/2; i++){
        if(c[i] != c[lenght-i-1]){
            return 0;
        }
    }
    return 1;
}
int even (char c[]){
   for(int i=0; i< strlen(c); i++){
       int digit = c[i]-'0';
       if(digit % 2 !=0){
           return 0;
       }
   }
   return 1;
}
int main(){
    int t; scanf("%d",&t);
    scanf("\n");
    while(t--){
        char c[501];
        gets(c);
        if(even(c) && thuan_nghich(c)){
        	printf("YES\n");
		}
		else printf("NO\n");
    }
}
