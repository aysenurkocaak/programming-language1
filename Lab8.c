#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{



   /*  1.


    int a,b,toplam;
    printf("a ve b degerlerini girin: ");
    scanf("%d%d", &a,&b);

    toplam= a+b;
    printf("toplam: %d", toplam); */


    /*  2.


    int r,area;

    printf("r: ");
    scanf("%d", &r);

    area= PI*r*r;
    printf("area: %d", area); */




    /*   3.


    int num;

    printf("entered number:");
    scanf("%d", &num);

    if(num%2==0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }   */


    /*  4.

    int num;

    printf("entered number:");
    scanf("%d", &num);

    if(num<0){
        printf("temp is below the freezing point");
    }
    else{
       printf("temp is above the freezing point");

    }*/





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

    printf("max sayi: %d", max);


    return 0;
}
