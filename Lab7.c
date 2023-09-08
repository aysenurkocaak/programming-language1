#include <stdio.h>
#include <stdlib.h>
#define PI 3,14

int main()
{

  /* 1.

    int a,b,toplam;
    printf("a ve b degerlerini girin: ");
    scanf("%d%d", &a,&b);

    toplam= a+b;
    printf("toplam: %d", toplam);  */


   /* 2.


    int a=2,b=3;
    int temp;

    temp=a;
    a=b;
    b=temp;

    printf("yeni a degeri= %d  yeni b degeri= %d", a,b);  */



  /* 3.


    int vize,finall,ort,no;

    printf( "ogrenci no:");
    scanf("%d", &no);
    printf("\nvize :");
    scanf("%d", &vize);
    printf("\nfinal:");
    scanf("%d", &finall);

    ort= ((vize*0.4) + (finall*0.6));

    printf("%d nolu ogrencinin ortalamasi=%d", no,ort); */



/*    4.


    float r,alan,cevre;
    int secim;

    while(1){
    printf("1- dairenin cevresini hesapla\n");
    printf("2- dairenin alanýný hesapla\n");

    printf("secim yapiniz..");
    scanf("%d", &secim);



    switch(secim){

    case 1: printf("yaricap girin: ");
    scanf("%f", &r);
    cevre = 2 * PI * r;
    printf("cevre: %f", cevre);
    break;

    case 2: printf("yaricap girin: ");
    scanf("%f", &r);
    alan= PI*r*r;
    printf("alan: %f", alan);
    break;

    default: printf("yanlis giris");
    break;
    }
    }*/



   /* 5.


    int para,kalan,yuzluk,yirmilik,ellilik,onluk;

    printf("para miktari girin:");
    scanf("%d", &para);

    yuzluk=para/100;
    kalan=para%100;

    ellilik= kalan /50;
    kalan=kalan%50;

    yirmilik= kalan /20;
    kalan=kalan%20;

    onluk= kalan/10;

    printf("%d tane yüzlük\n", yuzluk);
    printf("%d tane ellilik\n", ellilik);
    printf("%d tane yirmilik\n", yirmilik);
    printf("%d tane onluk\n", onluk);  */
































    return 0;
}
