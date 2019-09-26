#include <stdio.h>
/*
Ler as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem
parte da avaliação. Calcular a média de aproveitamento, usando a fórmula abaixo e escrever
o conceito do aluno de acordo com a tabela de conceitos mais abaixo:
Média de Aproveitamento =
N 1+N 2 * 2 +N 3 * 3 + Média dos exercícios/7
A atribuição de conceitos obedece a tabela abaixo:
Meia de Aproveitamento Conceito
>=9 conceito A
>=7,5 e < 9 conceito B
>= 6 e < 7,5 conceito C
< 6 conceito D
*/

int main (){

float n1,n2,n3,e,m;

printf("informe a primeira nota \n ");
        scanf ("%f", &n1);
printf("informe a segunda nota \n ");
        scanf ("%f", &n2);
printf("informe a terceira nota nota \n ");
        scanf ("%f", &n3);
               e = n1 + n2 + n3 / 3; //media de exercicio
printf("media de aproveitamento:  ",  m = (((n1+n2)*2) + (n3*3) + e)/7);//media aproveitamento
if (m >= 9){
    printf("Conceito A");
        }else{
if (m >= 7,5 && m < 9){
    printf("conceito B");
        }else{
if (m >=6 && m < 7,5){
    printf("Conceito C");
        }else{
    printf("conceito D");
}
    }
        }

return 0;
}
