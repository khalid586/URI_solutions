#include<stdio.h>

int main()
{

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
    {
        if(b>c)
        {
          
          printf("%d\n%d\n%d\n",c,b,a);
          printf("\n");
          printf("%d\n%d\n%d\n",a,b,c);
        }
        else
        {
          printf("%d\n%d\n%d\n",b,c,a);
          printf("\n");
          printf("%d\n%d\n%d\n",a,b,c);
        }
        
    }
     else if(b>c && b>a)
        {
            if(a>c)
            {
                printf("%d\n%d\n%d\n",c,a,b);
                printf("\n");
                printf("%d\n%d\n%d\n",a,b,c);
              
              }
            else
            {
                printf("%d\n%d\n%d\n",a,c,b);
                printf("\n");
                printf("%d\n%d\n%d\n",a,b,c);            
              }
        }
     else if(c>a && c>b)
        {
            if(a>b)
                {
                    printf("%d\n%d\n%d\n",b,a,c);
          printf("\n");
          printf("%d\n%d\n%d\n",a,b,c);
            
            
                  }
            else
           {
                    printf("%d\n%d\n%d\n",a,b,c);
         printf("\n");
          printf("%d\n%d\n%d\n",a,b,c);
        
        
          }

        }



            




            return 0;
        }