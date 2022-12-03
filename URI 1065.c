#include<stdio.h>

int main()
{
   int a,b,c,d,e,n=0;
    
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

 if(abs(a)%2==0)
  {
    n++;
  }
 if(abs(b)%2==0)
  {
    n++;
  }
 if(abs(c)%2==0)
  {
    n++;
  }
 if(abs(d)%2==0)
  {
    n++;
  }
 if(abs(e)%2==0)
  {
    n++;
  }
 printf("%d valores pares\n",n);

    return 0;
}