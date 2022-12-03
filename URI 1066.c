#include<stdio.h>

int main()
{
   int a,b,c,d,e,p=0,n=0,even=0,o=0;
    
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

 if(a>0)
  {
    p++;
  }
 if(b>0)
  {
    p++;
  }
 if(c>0)
  {
    p++;
  }
 if(d>0)
  {
    p++;
  }
 if(e>0)
  {
    p++;
  }
 if(a<0)
  {
    n++;
  }
 if(b<0)
  {
    n++;
  }
 if(c<0)
  {
    n++;
  }
 if(d<0)
  {
    n++;
  }
 if(e<0)
  {
    n++;
  }
if(abs(a)%2==0)
  {
    even++;
  }
 if(abs(b)%2==0)
  {
    even++;
  }
 if(abs(c)%2==0)
  {
    even++;
  }
 if(abs(d)%2==0)
  {
    even++;
  }
 if(abs(e)%2==0)
  {
    even++;
  }
if(abs(a)%2==1)
  {
    o++;
  }
 if(abs(b)%2==1)
  {
    o++;
  }
 if(abs(c)%2==1)
  {
    o++;
  }
 if(abs(d)%2==1)
  {
    o++;
  }
 if(abs(e)%2==1)
  {
    o++;
  }

 printf("%d valor(es) par(es)\n",even);
 printf("%d valor(es) impar(es)\n",o);
 printf("%d valor(es) positivo(s)\n",p);
 printf("%d valor(es) negativo(s)\n",n);




    return 0;
}