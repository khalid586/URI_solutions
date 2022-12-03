#include<stdio.h>

int main()
{
   float a,b,c,d,e,f,p=0,n=0,e=0,o=0;
    
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
    ++;
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
if(a%2==0)
  {
    e++;
  }
 if(b%2==0)
  {
    e++;
  }
 if(c%2==0)
  {
    e++;
  }
 if(d%2==0)
  {
    e++;
  }
 if(e%2==0)
  {
    e++;
  }
if(a%2!=0)
  {
    o++;
  }
 if(b%2!=0)
  {
    o++;
  }
 if(c%2!=0)
  {
    o++;
  }
 if(d%2!=0)
  {
    o++;
  }
 if(e%2!=0)
  {
    o++;
  }









 printf("%.0f valores positivos\n",n);

    return 0;
}