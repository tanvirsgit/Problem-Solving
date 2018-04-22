#include <stdio.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int m,n,k=0,r=0;
        scanf("%d %d",&m,&n);
        if(m>n) k=m;
        else k=n;
        if(m==1||n==1)
            r=k;
        else if(m==2||n==2)
        {
            if(k%2!=0)
                r=k+1;
            else{
                if(k%4==0)
                    r=k;
                else
                    r=((k/4)*4)+4;
            }
        }
        else
            r=((m*n)+1)/2;
            printf("Case %d: %d\n",i,r);
    }
    return 0;
}