#include<stdio.h>

int main()
{
   float N1,N2,N3,N4,n5,avg1,avg2; 
   scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
   
   avg1=(N1*2+N2*3+N3*4+N4*1)/10;
if(avg1>=7.0) 
{
printf("Media: %.1f\n",avg1);
printf("Aluno aprovado.\n") ;
}
else if(avg1<5.0)
{
  printf("Media: %.1f\n",avg1);
  printf("Aluno reprovado.\n");
}
else if(avg1>=5.0 && avg1<7.0)
{
printf("Media: %.1f\n",avg1);
printf("Aluno em exame.\n");
scanf("%f",&n5);
printf("Nota do exame: %.1f\n",n5);
avg2=(avg1+n5)/2;

if(avg2>=5.0)
{
printf("Aluno aprovado.\n");
printf("Media final: %.1f\n",avg2);
}
else if(avg2<5.0)
{
printf("Aluno reprovado.\n");
printf("Media final: %.1f\n",avg2);
}
}

    return 0;
}