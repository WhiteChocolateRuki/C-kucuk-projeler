#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kareleri toplami
    int sayi,i,girilen, toplam=0;
    printf("Kac Tane Sayi Gireceksiniz: ");
    scanf("%d",&sayi);

    for(i=1;i<=sayi;i++){
        printf("Sayi Girin: ");
        scanf("%d",&girilen);
        toplam+=girilen*girilen;


    }
    printf("Kareleri Toplamlari: %d",toplam);
}
