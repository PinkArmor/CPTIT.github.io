#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char c[100];
	gets(c);
	strrev(c);
	printf("%s" ,c);
}
