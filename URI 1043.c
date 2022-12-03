#include<stdio.h>

int main()
{
    float a,b,c,x;
    
    scanf("%f %f %f",&a,&b,&c);
    
    if((a+b>c) && (b+c>a) && (c+a>b))
     { 
       printf("Perimetro = %.1f\n",a+b+c);
     }
    else
     {
      x =((a+b)/2)*c;
      printf("Area = %.1f\n",x);
     }
    
    
    
    
    return 0;
}