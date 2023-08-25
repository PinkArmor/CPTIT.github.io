#include <stdio.h>

int main()
{
    int t; scanf("%d",&t);
    while(t--){
        int n,p; scanf("%d%d",&n,&p);
        int cnt=0;
        for(int i=p; i<=n ; i*=p){
            cnt += n/i;
        }
        printf("%d\n",cnt);
    }
    
    return 0;
}
