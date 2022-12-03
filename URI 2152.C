#include<stdio.h>
#include<math.h>
#include<string.h>

int main()

   {

      int n,in=0,h,m,o;

      scanf("%d",&n);

      while(in<n)
      {
          scanf("%d %d %d",&h,&m,&o);
          in++;

          if(h<10 && m>=10)
          {
               printf("0%d:%d - ",h,m);
          }
          else if(h>=10 && m<10)
          {
               printf("%d:0%d - ",h,m);
          }
          else if(h<10 && m<10)
          {
               printf("0%d:0%d - ",h,m);
          }
          else if(h>=10 && m>=10)
          {
               printf("%d:%d - ",h,m);
          }

          if(o==1)
          {
              printf("A porta abriu!");
          }
          else  if(o==0)
          {
              printf("A porta fechou!");
          }

          printf("\n");
      }



   }



