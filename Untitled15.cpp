#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	if (n==1 || n==0){
		return false;
	}
	for(int i=2 ; i<= sqrt(n); i++){
		if(n % i ==0)
		  return false;
	}
}

int main(){
	int n;
	
	cout << "nhap so nguyen to:";
	cin >> n;
	if(check(n)){
		cout << "yes";
	}
	else
	cout << "no";
	return 0;
}
