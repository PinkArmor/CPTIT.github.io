#include <bits/stdc++.h>
using namespace std;

bool chinhphuong (int n){
	int a= sqrt(n);
	if (a*a == n)
	return 1;
	else 
	return 0;
}

int main(){
	int n;
	scanf("%d" , &n);
	if(chinhphuong(n))
	  printf("yes");
	else 
	  printf("no");
	  return 0;  
	
}
