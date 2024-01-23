#include <stdio.h>
#include <stdlib.h>

int main()
{
    //basamak sayisi bulma
    int sayi,sayac=0;
    printf("Sayi Giriniz: ");
    scanf("%d",&sayi);


    while(sayi!=0){
        sayi/=10;
        sayac++;
    }
    printf("%d Basamakli Sayidir\n",sayac);

}
