#include <stdio.h>
#include <stdlib.h>

int main()
{
        //kulanicidan alinan aralýklardaki asal sayilari bulan
        int bas,bitis,flag;
        printf("baslangic: ");
        scanf("%d",&bas);
        printf("bitis: ");
        scanf("%d",&bitis);


        for(int i=bas; i<=bitis;i++){
                int flag=1;
                for(int j=2;j<i;j++){
                    if(i%j==0){
                        flag=0;
                        break;
                    }

                }
                if(flag!=0 && i>1){
                    printf("%d \t",i);
                }


        }
}
