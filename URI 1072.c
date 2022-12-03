#include<stdio.h>

/*program is about deciding how many inputs 
to take and using for loop*/

int main()
{
    int N, i,X,in=0,out=0;
    
     scanf("%d",&N);
    
    
    
    for(i=1;i<N+1;i++)
    {
     scanf("%d",&X);
    
      if(X>=10 && X<=20)
     {
       in++;
     }
      else
     {
       out++;
     } 
    }
   printf("%d in\n%d out\n",in,out);
    
    return 0;
}