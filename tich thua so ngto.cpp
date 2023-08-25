

#include<stdio.h> 
int main(){
    int t; 
    scanf("%d",&t); // số bộ test
    while(t--){
        int n; 
        scanf("%d",&n); // nhập số cần tính giá trị
        int tich=1; // biến tích để tính giá trị
        for(int i=2;i<=n;i++){
            while(n%i==0){
                if((n/i)%i!=0) // kiểm tra xem i có phải thừa số nguyên tố của n hay không
                    tich=tich*i;
                n=n/i;                
            }
        }
        printf("%d\n",tich);
    }
}