#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");

//Definindo Variáveis
int opcao;

//Compara e confere a opção
while(opcao < 1 || opcao > 3){

    //Interface de Menu
    printf("Escolha uma opção:");
    printf("\n Opção 1:");
    printf("\n Opção 2:");
    printf("\n Opção 3:\n");

    //Lendo a opção
    scanf("%d", &opcao);

    //Resultado de acordo com a opção escolhida
    switch(opcao){
    case 1:
            printf("\nA opção escolhida foi 1");
        break;
    case 2:
            printf("\nA opção escolhida foi 2");
        break;
    case 3:
            printf("\nA opção escolhida foi 3");
        break;
    default:
            printf("\nA opção escolhida é inválida\n");
        break;


    }




}

}
