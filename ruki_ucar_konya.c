//Rukiye Ucar
//21100011057

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,boyut;
    printf("boyut giriniz: ");
    scanf("%d",&boyut);
    if(boyut%2==1){
        boyut++;
    }

    //R
    for(i=1;i<=boyut/2;i++){
        for(j=1;j<=boyut;j++){
            if(i==1 || i==boyut/2 || j==1 || j ==boyut )
                {
                printf("*");
                }
                else {
                    printf(" ");
                    }
            }
            printf("\n");
        }
        for(i>boyut/2;i<=boyut;i++){
            for(k=1;k<=boyut;k++){
                if(i==1 || i==k || k==1){
                    printf("*");
                }
                else {
                        printf(" ");
                    }
            }
            printf("\n");
        }
        printf("\n\n");

    //U
    for(i=1;i<=boyut;i++){
        for(j=1;j<=boyut;j++){
            if(j==1 || j==boyut){
                printf("*");
            }
            else if(i==boyut){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    //K
    for (i=1; i<=boyut/2; i++){
        for(j=1;j<=boyut;j++){
            if(j+i==(boyut/2)+1 || j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }
    for (i=1; i<=boyut/2; i++){

        for(k=1;k<=boyut;k++){
            if(k==1 || i==k){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }
    printf("\n\n");

    //I
    for(i=1;i<=boyut;i++){
            printf("*\n");

    }
    printf("\n\n");


    //Y
    for (i=1;i<=boyut/2;i++){
        for(j=1;j<=boyut;j++){
            if(i==boyut/2 || j==1 || j==boyut){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=boyut/2;i++){
        for(k=1;k<=boyut;k++){
            if(i==boyut/2 || k==boyut){
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    printf("\n\n");

    //E
    for(i=1;i<=boyut;i++){
        for(j=1;j<=boyut;j++){
            if(i==1 || j==1 || i==boyut/2 || i==boyut){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n");

    //U
    for(i=1;i<=boyut;i++){
        for(j=1;j<=boyut;j++){
            if(j==1 || j==boyut){
                printf("*");
            }
            else if(i==boyut){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    //C
    for(i=1;i<=boyut;i++){
        for(j=1;j<=boyut;j++){
                if(i==1 || i==boyut){
                    printf("*");
                    }
                if(j==1){
                    printf("*");
                }
        }
        printf("\n");
    }
    printf("\n\n");
    //A
        for(i=1;i<=boyut;i++){
            for(j=1;j<=boyut;j++){
                if(i==1 || i==boyut/2){
                    printf("*");
                }
                else if(j==1 || j==boyut){
                    printf("*");
                }
                else {
                    printf(" ");
                }

            }
            printf("\n");
        }
    printf("\n\n");

    //R
    for(i=1;i<=boyut/2;i++){
        for(j=1;j<=boyut;j++){
            if(i==1 || i==boyut/2 || j==1 || j ==boyut )
                {
                printf("*");
                }
                else {
                    printf(" ");
                    }
            }
            printf("\n");
        }
        for(i>boyut/2;i<=boyut;i++){
            for(k=1;k<=boyut;k++){
                if(i==1 || i==k || k==1){
                    printf("*");
                }
                else {
                        printf(" ");
                    }
            }
            printf("\n");
        }
    printf("\n\n");


    //K
    for (i=1; i<=boyut/2; i++){
        for(j=1;j<=boyut;j++){
            if(j+i==(boyut/2)+1 || j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }
    for (i=1; i<=boyut/2; i++){

        for(k=1;k<=boyut;k++){
            if(k==1 || i==k){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }
    printf("\n\n");

    //O
    for(i=1;i<=boyut;i++){
        for(j=1;j<=boyut;j++){
            if(i==1 ||i==boyut || j==1 || j==boyut){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");


    //N
    for(i=1;i<=boyut;i++){
        for(j=1;j<=boyut;j++){
            if(j==1 || j== boyut || i==j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    //Y
    for (i=1;i<=boyut/2;i++){
        for(j=1;j<=boyut;j++){
            if(i==boyut/2 || j==1 || j==boyut){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=boyut/2;i++){
        for(k=1;k<=boyut;k++){
            if(i==boyut/2 || k==boyut){
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    printf("\n\n");

    //A
        for(i=1;i<=boyut;i++){
            for(j=1;j<=boyut;j++){
                if(i==1 || i==boyut/2){
                    printf("*");
                }
                else if(j==1 || j==boyut){
                    printf("*");
                }
                else {
                    printf(" ");
                }

            }
            printf("\n");
        }
    printf("\n\n");

}
