#include <stdio.h>
#include <stdlib.h>

int main()
{
    //girilen sayiyi ascii koduna çevirme
    char karakter;
    printf("Karakter Girin: ");
    scanf(" %c",&karakter);   //kodun daha saglikli olmasi icin %c'den once bir bosluk

    int ascii = (int)karakter;   // karakteri tamsayiya dönüstürmek için (int) dönüsüm operatörünü kullaniyoruz
    printf("\nGirilen Deger: %c\nASCII Degeri: %d",karakter, ascii);
}
