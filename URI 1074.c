
#include<stdio.h>
#include<math.h>

int main()
{
    int n,i=0,num;

    while(scanf("%d",&n) )
    {


        while(i<n)
           {
             scanf("%d",&num);
             i++;
            if(num>0)
            {
               if(num%2==0)
               {
                   printf("EVEN POSITIVE\n");
               }
               else
                {
                   printf("ODD POSITIVE\n");
                }
            }
            else if(num<0)

            {
                if(abs(num)%2==0)
                {
                   printf("EVEN NEGATIVE\n");
                }
               else
                {
                   printf("ODD NEGATIVE\n");
                }
            }
            else
            {
                printf("NULL\n");
            }

        }
  break;   }


}
