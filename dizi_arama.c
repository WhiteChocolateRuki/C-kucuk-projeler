#include <stdio.h>
#include <stdlib.h>

int main()
{
    //dizide sayi arama
    int bulunan,flag=0;

    int dizi[10][10];
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            dizi[i][j] = rand()%100;
        }

    }
    printf("Aramak istediginiz sayiyi yazin: ");
    scanf("%d",&sayi);

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++) {
            if(sayi==dizi[i][j]){
                flag=1;
            }

        }
    }
    if(flag==1)
    {
        printf("Sayi dizide mevcut");
    }
    else
    {
        printf("Sayi dizide yok");
    }
}
