#include <stdio.h>
#include <math.h>
int solve(int n)
{
    int sum=0;
    for(int i=2; i<= sqrt(n); i++){
        if(n%i==0){
            while(n%i==0){
                sum +=i;
                n/=i;
            }
        }
    }
    if(n > 1) sum +=n;
    return sum;
}
int factorSum(int n){
      while(n != solve(n)){
          n = solve(n); /*/hàm này sử dụng hàm solve đã viết ở trên để tính 
		  tổng thừa số nguyên tố,tính cho đến khi kết quả không còn thừa số nguyên tố nào thì thôi./*/
      }
      return n;
}
int main(){
	int n; scanf("%d",&n);
	printf("%d", factorSum(n));
}
