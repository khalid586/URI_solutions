#include<stdio.h>

int main()

/*
in this program we will distinguish integer
 and fraction part of a floating number
*/
{

    float N;
    int poisa,tk,a,b,c,d,e,f,g,h,i,j,k,l,m;
    int p1,p2,p3,p4,p5,p6,p7,p8,p9;
    scanf("%f",&N);

    tk=(int)N;
    poisa=(N-floor(N))*100;

    printf("tk=%d\npoisa=%d\n",tk,poisa);


    a=tk/100;
    b=tk%100;
    c=b/50;
    d=b%50;
    e=d/20;
    f=d%20;
    g=f/10;
    h=f%10;
    i=h/5;
    j=h%5;
    k=j/2;
    l=j%2;
    m=l/1;

    p1=poisa/50;
    p2=poisa%50;
    p3=p2/25;
    p4=p2%25;
    p5=p4/10;
    p6=p4%10;
    p7=p6/5;
    p8=p6%5;
    p9=p8/1;

    printf("Notas:\n%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",c);
    printf("%d nota(s) de R$ 20.00\n",e);
    printf("%d nota(s) de R$ 10.00\n",g);
    printf("%d nota(s) de R$ 5.00\n",i);
    printf("%d nota(s) de R$ 2.00\n",k);
   
    printf("Medas:\n%d moeda(s) de R$ 1.00\n",m);
    printf("%d moeda(s) de R$ 0. 50\n",p1);
    printf("%d moeda(s) de R$ 0.25\n",p3);
    printf("%d moeda(s) de R$ 0.10\n",p5);
    printf("%d moeda(s) de R$ 0.05\n",p7);
    printf("%d moeda(s) de R$ 0.01\n",p9);







    return 0;
}