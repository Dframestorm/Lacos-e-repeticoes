#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");

//Definindo Vari�veis
int opcao;

//Compara e confere a op��o
while(opcao < 1 || opcao > 3){

    //Interface de Menu
    printf("Escolha uma op��o:");
    printf("\n Op��o 1:");
    printf("\n Op��o 2:");
    printf("\n Op��o 3:\n");

    //Lendo a op��o
    scanf("%d", &opcao);

    //Resultado de acordo com a op��o escolhida
    switch(opcao){
    case 1:
            printf("\nA op��o escolhida foi 1");
        break;
    case 2:
            printf("\nA op��o escolhida foi 2");
        break;
    case 3:
            printf("\nA op��o escolhida foi 3");
        break;
    default:
            printf("\nA op��o escolhida � inv�lida\n");
        break;


    }




}

}
