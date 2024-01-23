#include <stdio.h>
#include <stdlib.h>

int main()
{
    //sayi tahmin oyunu
    int sayi,tahmin,i;
    sayi=(rand() % 100);
    printf("0-100 arasindaki sayiyi tahmin edin\n5 hakkiniz var:)\niyi eglenceler:))\n");
    for(i=4;i>=0;i--){
        printf("tahmin girin: ");
        scanf("%d",&tahmin);
        if(tahmin==sayi){
            printf("tebrikler dogru tahmin :D\n");
            break;
        }
        else if(tahmin>sayi){
            printf("daha kucuk sayi girin, kalan hak: %d\n",i);
        }
        else if(tahmin<sayi){
            printf("daha buyuk sayi girin,kalan hak: %d\n",i);
        }
        else{
            printf("yanlis girdiniz");
            i++;
            continue;
        }
        if (i == 0) {
        printf("Hakkiniz bitti. Sayi: %d\n", sayi);

        }
    }
}
