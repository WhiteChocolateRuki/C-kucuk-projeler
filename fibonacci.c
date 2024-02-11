#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kullanýcýdan alinan kadar fibonacci sayisi yazar
    int a,b,c,i,fibo,sayi;
    a=1;
    b=1;
    printf("sayi girin: ");
    scanf("%d",&sayi);
    printf("%d\t%d\t",a,b);

    for(i=1;i<=sayi-2;i++){
            c=a+b;
            a=b;
            b=c;
            printf("%d\t",b);

    }
}
