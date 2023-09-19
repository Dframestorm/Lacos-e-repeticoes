#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");

//Definindo Variáveis
int a = 1, b = 10;

//Contando até 10
while(a <= 10){
    printf("\n %d", a);

//Incremento
  a = a + 1;

}

//Contagem Regressiva
while(b >= 1){
    printf("\n %d", b);

//10 a 1
  b = b - 1;

}


}
