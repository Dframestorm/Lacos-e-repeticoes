#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");

//Definindo Variáveis
int a = 1;

//Primeiro confere a condição, depois repete o bloco
while(a <= 10){
    printf("\n %d", a);

//Incremento
  a = a + 1;

}

//Alternando o Valor de 'a'

a = 20;

//Primeiro executa uma vez, depois confere a condição
do{
    printf("\n %d", a);

    //Incremento
      a = a + 1;

}while(a <= 20);

//Contagem Regressiva

/*while(a >= 1){
    printf("\n %d", a);

//10 a 1
  a = a - 1;

}
*/

}


