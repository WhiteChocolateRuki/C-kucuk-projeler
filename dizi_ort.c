#include <stdio.h>
#include <stdlib.h>

int main()
{
    //dizideki elelmalarýn ortalamasýný bulan

    int dizi[10][10];
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            dizi[i][j] = rand()%100;
            toplam += dizi[i][j];
        }

    }

    ort = toplam /100;

    printf("Toplamlari: %.2f\nOrtalamasi: %.2f",toplam,ort);


}
