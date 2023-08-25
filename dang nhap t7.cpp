#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main{
    char c[1000];
    char a[50][50];
    int n=0;
    gets(c);
    for(int i=0; i< strlen(c); i++){
    	c[i] = tolower(c[i]);
	}
    char *token = strtok(c, " ");
    while(token != NULL){
    	strcpy(a(n), token);
    	++n; 
    	token = strtok(NULL," ");
	}
}