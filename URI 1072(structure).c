#include<stdio.h>

int main()
{
    int input_no,i,n=0, x[100000]={} ;
    
     scanf("%d",&input_no);
    
    
    
    for(i=0;i<input_no;i++)
    {
     scanf("%d",x[i]);
    
      if(x[i]>=10 && x[i]<=20)
     {
       n++;
     }
     printf("%d",n); 
    }
   
    
    return 0;
}