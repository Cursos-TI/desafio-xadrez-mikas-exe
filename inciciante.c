#include <stdio.h>

int main(){
int bispod;
int bispoc;
int torre= 1;
int rainha = 1;

while(torre <= 5)
{
    printf( " torre %d casa para direita \n", torre);
    torre++;
}
 printf("\n");

do{
    printf("digite o numero de casas para direita \n");
    scanf("%d", &bispod);
    printf("digite o numero de casas para cima \n");
    scanf("%d", &bispoc);
}while(bispod && bispoc >= 10);

     printf("bispo %d casas para direita \n", bispod);
     printf("bispo %d casas para cima \n", bispoc);

     printf("\n");

     for( rainha;rainha <=8;rainha++);
     {
        printf("rainha %d casas para a esquerda \n",rainha );
     }





    return 0;
}