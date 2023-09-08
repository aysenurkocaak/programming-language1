#include <stdio.h>
#include <stdlib.h>

int main()
{


    /*  1.


    int p,i,n=1;

    while(1){

        p= n*(3*n-1)/2;
        n++;

        if(p>=100){
            break;
        }

        printf("pentagon sayilar = %d\n", p);

    }*/


    /* 2.


    int A[2][2],B[2][2],C[2][2];
    int i,j;

    printf("A matrisi:\n ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("eleman girin: ");
            scanf("%d", &A[i][j]);
        }
    }

    printf("B matrisi:\n ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("eleman girin: ");
            scanf("%d", &B[i][j]);
        }
    }

    printf("C matrisi: \n");
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            C[i][j]= A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
    }  */


/*    3.  */


   float ogrenci[10][2];
   int i;

   for(i=0;i<10;i++){
    printf("%d.ogrenci boyu: ",i+1);
    scanf("%f", &ogrenci[i][0]);
    printf("%d.ogrenci kilosu:",i+1);
    scanf("%f", &ogrenci[i][1]);
   }

   float toplamboy=0.0;
   float toplamkilo=0.0;

   for(i=0;i<10;i++){
    toplamboy += ogrenci[i][0];
    toplamkilo += ogrenci[1][i];
   }


   float ortboy= toplamboy/10.0;
   float ortkilo=toplamkilo/10.0;

   printf("ort boy: %.2f", ortboy);
   printf("ort kilo: %.2f",ortkilo);




    return 0;
}
