#include <stdio.h>

void movertorre(int casas){
    if (casas> 0) {
        printf( "direita \n");
        movertorre (casas -1);
    }
}
void moverrainha(int casas){
    if(casas > 0){
        printf("esquerda \n");
        moverrainha(casas -1);
    }
}
void moverbispo(int casas){
        if(casas > 0){


            printf("direita \n");
            moverbispo(casas -1);
        }

}

int main (){

    int bispo;

    printf("torre \n");
    movertorre(5);
printf("\n");


    printf("rainha \n");
    moverrainha(8);
    printf("\n");

   // printf("bispo \n");
  //  moverbispo(4);
   // printf("\n");

    printf("cavalo \n");
    for(int cavalo =0; cavalo< 5; cavalo++){
        if(cavalo==2)
        printf( "direita \n");

        if (cavalo ==2) break;
        printf(" cima \n");

    }
    printf("\n");

    printf("bispo \n");
    while(bispo <= 4)
     {
        for(bispo= 0; bispo < 4; bispo++){
            printf("cima\n");
        }
        moverbispo(4);
    break;


     }



return 0;
}