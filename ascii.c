#include <stdio.h>
#include <stdlib.h>

int main()
{
    //girilen sayiyi ascii koduna �evirme
    char karakter;
    printf("Karakter Girin: ");
    scanf(" %c",&karakter);   //kodun daha saglikli olmasi icin %c'den once bir bosluk

    int ascii = (int)karakter;   // karakteri tamsayiya d�n�st�rmek i�in (int) d�n�s�m operat�r�n� kullaniyoruz
    printf("\nGirilen Deger: %c\nASCII Degeri: %d",karakter, ascii);
}
