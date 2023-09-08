#include <stdio.h>
#include <stdlib.h>


int main()
{


    /*   1.


    float A[8];
    float toplam=0.0, ort;
    int i;

    for(i=0;i<8;i++){
        printf("deger: " , i+1);
        scanf("%f", &A[i]);
        toplam += A[i];
    }

    ort= toplam / 8;

    printf("dizi ortalamasi:  %.2f", ort); */


    /*  2.


    int dizi[10];
    int sayi, i=0;

    while(1){
        printf("sayi giriniz:");
        scanf("%d", &sayi);

        if(sayi == -1  || i>=10){
            break;
        }

        dizi[i]=sayi;
        i++;
    }

    printf("girilen sayilarin kareleri: \n");

    for(int j=0;j<i;j++){
        int  kare=pow(dizi[j],2);
        printf("%d nin karesi : %d\n", dizi[j],kare);

    } */


 /*  3.


    int dizi[5],sayi,basamaksayisi=0,i;


    printf("sayi giriniz:");
    scanf("%d", &sayi);

    while(sayi>0){
        dizi[basamaksayisi]=sayi%10;
        sayi/=10;
        basamaksayisi++;
    }

    printf("girilen sayinin basamaklari: ");
    for(i=basamaksayisi-1; i>=0;i--){
        printf("%d\n", dizi[i]);
    }*/


   /*  5.*/

    int dizi[10],i;

    for(i=0;i<10;i++){

        printf("%d.eleman:", i+1);
        scanf("%d", &dizi[i]);
    }

    printf("\n");

    printf("tersten elemanlar: ");
    for(i=9;i>=0;i--){
        printf("%d ", dizi[i]);
    }













}
