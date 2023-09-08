#include <stdio.h>
#include <stdlib.h>


/* 1.
   int alanbul(int x){

    return x*x;
}

*/

/*   2.

    int ortbul( int dizi[],int n){

    int toplam=0;
    for(int i=0;i<n;i++){
         toplam += dizi[i];
    }
    return toplam/5;
}
*/


/*   3.

   int tekmiciftmi(int sayi){

    if(sayi%2==0){
        return 1;
    }
    else
        return 0;
}
*/


/* 4.

int asalmi(int sayi){

    if(sayi <= 1){
        return 0;
    }
    for(int i=2; i<=sqrt(sayi);i++){
        if(sayi %i ==0){
            return 0;
        }
    }
    return 1;
}

int armstrongmu(int sayi){

    int toplam = 0;
    int gecici = sayi;
    int basamakSayisi = 0;

    while (gecici != 0) {
        gecici /= 10;
        basamakSayisi++;
    }

    gecici = sayi;

    while (gecici != 0) {
        int rakam = gecici % 10;
        toplam += pow(rakam, basamakSayisi);
        gecici /= 10;
    }

    return (toplam == sayi);
}*/


 // 5.

int kelimeSayisi(const char *cumle) {
    int sayac = 0;
    int kelimeModu = 0;

    for (int i = 0; cumle[i] != '\0'; i++) {
        if (cumle[i] == ' ' || cumle[i] == '\t' || cumle[i] == '\n') {
            kelimeModu = 0;
        } else if (kelimeModu == 0) {
            kelimeModu = 1;
            sayac++;
        }
    }

    return sayac;
}


int main()
{
   /*  1.

    int x;
    printf("karenin kenarini girin: ");
    scanf("%d", &x);
    int alan = alanbul(x);
    printf("alan: %d", alan);*/


 /* 2.

    int dizi[5];
    int i,ort;

    for(i=0;i<5;i++){
        printf("sayi gir:");
        scanf("%d", &dizi[i]);

    }
    ort=ortbul(dizi,5);
    printf("ort: %d", ort);  */


 /* 3.  int sayi;

    printf("sayi gir:");
    scanf("%d", &sayi);

    if(tekmiciftmi(sayi)){
        printf("cifttir");
    }
    else{
        printf("tektir");
    }
    */




  /* 4.

    int sayi;

    printf("sayi girin:");
    scanf("%d", &sayi);


     if (asalMi(sayi)) {
        printf("%d bir asal sayidir.\n", sayi);
    } else {
        printf("%d bir asal sayi degildir.\n", sayi);
    }

    if (armstrongMu(sayi)) {
        printf("%d bir Armstrong sayisidir.\n", sayi);
    } else {
        printf("%d bir Armstrong sayisi degildir.\n", sayi);
    }*/


    // 5.

    char cumle[1000];

    printf("Bir cumle girin:\n");
    gets(cumle);

    int kelimeSay = kelimeSayisi(cumle);

    printf("Cumledeki kelime sayisi: %d\n", kelimeSay);





    return 0;
}
