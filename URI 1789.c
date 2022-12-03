
#include<stdio.h>
#include<math.h>

int main()

   {

       int L;

       while((scanf("%d",&L))!=EOF)
       {

         int x[L],i=0,max=0;
         while(i<L)
          {
            scanf("%d",&x[i]);


             if(x[i]>max)
             {
                 max=x[i];

             }

               i++;


          }

if(max<10)
         {
             printf("1\n");
         }
        else if(max>=10 && max<20)
         {
             printf("2\n");
         }
        else if(max>=20)
         {
             printf("3\n");
         }




       }



    }






