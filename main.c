#include <stdio.h>
#include <stdlib.h>

int main()
{
    //hesap makinesi
    int a,b;
    char islem,cikis = 1;


    while(cikis)
    {
        printf("2 Tane Sayi Giriniz: ");
        scanf("%d %d",&a,&b);
        printf("(Cikis Yapmak Icin 0 tuslayin)\n");
        printf("Yapmak Istediginiz Islem: ");
        scanf(" %c",&islem);

        switch(islem){
        case '+' :
            printf("Cevap: %d\n",a+b);
            break;

        case '-':
            printf("Cevap: %d\n",a-b);
            break;

        case '*':
            printf("Cevap: %d\n",a*b);
            break;

        case '/':
            if(b==0){
                printf("Sayi 0'a Bolunemez\n");
                continue;

            }
            printf("Cevap: %d\n",a/b);
            break;
        case '0':
            printf("Cikis Yapildi\n");
            cikis = 0;
            break;

        default:
            printf("Hatali Giris\nLutfen '+','-','*','/' islemlerinden birini giriniz..\n");
            break;
        }


    }
}
