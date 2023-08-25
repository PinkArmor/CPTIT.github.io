

#include <stdio.h>
#include <math.h>
int prime(int n){
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int main(){
    int n;  scanf("%d",&n);
    int a[1000];
    int i=0, cnt=1;
    while(cnt <=1000){
        if(prime(i)){
            a[cnt] =i;
            ++cnt;
        }
        ++i;
    }
    printf("%d",a[n]);
}
