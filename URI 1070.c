#include<stdio.h>
int main()
{
  int a,b,i;
  scanf("%d",&a);
 
  if(a%2==1)
  {  
    b=a;
  }
 else
  {
   b=a+1;
  
  }
   
    for(i=1;i<7;i++)
    { 
        
        printf("%d\n",b);
        b=b+2;
        
    }
    return 0;
}