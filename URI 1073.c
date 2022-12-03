#include<stdio.h>

int main()
{
    
    int N,r,i,x;
    scanf("%d",&N);
    
    
    for(i=2,x=2;i<=N;i+=2)
    {
    
    r=i*i;
    printf("%d^%d = %d\n",i,x,r);
    
    }
    return 0;
}