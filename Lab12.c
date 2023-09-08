#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    /*1.

    char str1[]="Ahmet";
    char str2[]="Ali";

    strcat(str1,str2);

    printf("sonra: %s", str1);  */



    /*    2.

    char str[100];
    char sadeceharf[100];
    int i,j=0;

    printf("cümle giriniz: ");
    gets(str);

    for(i=0; str[i] != '\0' ;i++){
        char karakter=str[i];
        if((karakter>='a' && karakter<='z' ) ||  (karakter>='A' && karakter<= 'Z')){
            sadeceharf[j++]=karakter;
        }
    }

    sadeceharf[j]= '\0';

    printf("sadece harf metni: %s", sadeceharf);*/


  /*   3.


    char metin[1000];
    int sesliHarfSayisi = 0;
    int unsuzHarfSayisi = 0;
    int rakamSayisi = 0;
    int boslukSayisi = 0;

    printf("Bir metin girin:\n");
    gets(metin);

    for (int i = 0; metin[i] != '\0'; i++) {
        char karakter = metin[i];

        if (isalpha(karakter)) {
            karakter = tolower(karakter);
            if (karakter == 'a' || karakter == 'e' || karakter == 'i' || karakter == 'o' || karakter == 'u') {
                sesliHarfSayisi++;
            } else {
                unsuzHarfSayisi++;
            }
        } else if (isdigit(karakter)) {
            rakamSayisi++;
        } else if (isspace(karakter)) {
            boslukSayisi++;
        }
    }

    printf("Sesli Harf Sayisi: %d\n", sesliHarfSayisi);
    printf("Unsuz Harf Sayisi: %d\n", unsuzHarfSayisi);
    printf("Rakam Sayisi: %d\n", rakamSayisi);
    printf("Bosluk Sayisi: %d\n", boslukSayisi);  */



// 4.

    char kelimeler[10][50];
    char gecici[50];
    int i, j;

    printf("10 string girin:\n");


    for (i = 0; i < 10; i++) {
        printf("String %d: ", i + 1);
        gets(kelimeler[i]);
    }

    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (strcmp(kelimeler[j], kelimeler[j + 1]) > 0) {
                strcpy(gecici, kelimeler[j]);
                strcpy(kelimeler[j], kelimeler[j + 1]);
                strcpy(kelimeler[j + 1], gecici);
            }
        }
    }

    printf("\nAlfabetik sýraya göre:\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", kelimeler[i]);
    }


    return 0;
}
