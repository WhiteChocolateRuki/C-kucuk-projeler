#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Armstrong sayi kontrolu
    //Bir sayinin Armstrong sayisi olup olmadigini kontrol etmek icin
    //oncelikle sayinin basamak sayisini belirlemeniz gerekmektedir.
    //Bir sayinin Armstrong sayisi olabilmesi icin, her bir basamaginin uslerinin toplami, o sayiya esit olmalidir.
    int sayi,i,j,mod,basamak=0,sayi1,top=0;
    printf("sayi girin: ");
    scanf("%d",&sayi);
    sayi1=sayi;

    while(sayi1>0)
    {
        sayi1/=10;
        basamak++;
    }
    sayi1=sayi;

    while(sayi1 !=0)
    {
        mod=sayi1%10;
        top += pow(mod, basamak);
        sayi1 /=10;


    }
    if (sayi == top)
    {
        printf("%d bir armstrong sayidir.", sayi);
    }
    else
    {
        printf("%d bir armstrong sayi degildir.", sayi);
    }


    return 0;
}
