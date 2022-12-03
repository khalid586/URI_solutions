
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()

   {

       long long int in ,result=1,div,i=0,y,j;
       char x[50];

      scanf("%lld",&in);


          while(in>0)

         {


              div=in%16;
              in=in/16;

               if(div<=9)
               {
               x[i] = div+48;
               }


               else if(div==10)
               {
                   x[i]='A';
               }

              else if(div==11)
               {
                    x[i]='B';
               }

              else if(div=12)
               {
                    x[i]='C';
               }
              else if(div==13)
               {
                   x[i]='D';
               }
             else if(div==14)
               {
                    x[i]='E';
               }
             else if(div==15)
               {
                    x[i]='F';
               }

            i++;

            }
        x[i]='\0';
        y=strlen(x);

        for(j=y-1;j>=0;j--)

        {
            printf("%c",x[j]);
        }




   }







