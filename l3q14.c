#include <stdio.h>
/*
Ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo valor, ou seja,
para o segundo valor não pode ser aceito o valor zero e imprimir o resultado da divisão do
primeiro valor lido pelo segundo valor lido. (utilizar a estrutura REPETIR)
*/

int main(){
   float n1, n2=0, d;
            printf("digite um numero: ");
                scanf("%f", &n1);
    while (n2 == 0){
            printf("digite outro numero: ");
                scanf("%f", &n2);
    }
            printf("resultado %.3f", d = n1 / n2);
    return 0;
}

