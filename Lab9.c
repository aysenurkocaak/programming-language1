#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    /* 1.

    int a,b,c,max;
    printf("a b c sayilari girin:");
    scanf("%d%d%d", &a,&b,&c);

    max=a;

    if(a>b && a>c){
        max=a;
    }
    else if(b>a && b>c){
        max=b;
    }
    else{
        max=c;
    }

    printf("max sayi: %d", max); */



    /*  2.


    int n,i,fact=1;
    printf("n=");
    scanf("%d", &n);

    for(i=n; i>0;i--){
        fact= fact*i;
    }


    printf("fact=  %d", fact); */


    /* 3.

    int i;

    for(i=1000; i<=2000; i+=2){
        printf("cift sayilar:%d\n",i);
    }*/



    /*   4.


    int orjinalnum, num, tersnum=0, kalan;

    printf("num girin: ");
    scanf("%d", &num);

    orjinalnum=num;

    while(num !=0){
        kalan=num%10;
        tersnum= tersnum*10 + kalan;
        kalan/=10;
    }

    if(orjinalnum == tersnum){
        printf("%d polindrom sayidir",orjinalnum);
    }
    else{
        printf("%d polindrom degildir,",orjinalnum);
    } */

  /* ??????


    int x,i,result=0;
    printf(" x gir:");
    scanf("%d", &x);

    for(i=1;i<3;i++){
        result = result +(i+x+x^(i+1)/(i+1)!);
    }

    printf("result= %d", result);  /*


    return 0;
}
