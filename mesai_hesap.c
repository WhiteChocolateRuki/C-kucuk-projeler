#include <stdio.h>
#include <stdlib.h>

/*
Bir sirket, calisanlarina, fazla mesai ücreti ödemektedir.
Sizden ücreti hesaplayan bir program yazmaniz isteniyor.
Programin özellikleri asagidaki sekildedir:
10 saate kadar saat basina 5 lira
10 ile 20 saat arasinda, saat basina 3 lira
20 saatten sonrasi icin, saat basina 2 lira
*/

int main()
{
    int mesai,ucret;
    printf("Kac saat mesai yaptiniz?: ");
    scanf("%d",&mesai);

    if (mesai<=10){
        ucret=mesai*5;
    }
    else if (mesai<=20){
        ucret=(mesai-10)*3+50;
    }

    else if (mesai>20){
        ucret=(mesai-20)*2+80;
    }

    else{
        printf("Bir hata olustu\n");
    }

    printf("Alacaginiz mesai ucreti: %d\n",ucret);
    return 0;
}
