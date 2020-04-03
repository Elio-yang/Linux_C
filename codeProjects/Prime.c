#include <stdio.h>
#include<math.h>
int isPrime(int n)
{
    int flag=1;
    for(int i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
 
int main(void)
{
    int m,k;
    int cnt=0;
    scanf("%d %d",&m,&k);
    for(int i=m+1;;i++)
    {
        if(isPrime(i))
        {
            printf("%d\n",i);
            cnt++;
        }
        if(cnt==k)
            break;
    }
    return 0;
}


