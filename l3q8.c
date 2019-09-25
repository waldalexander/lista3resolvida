#include<stdio.h>
/*
Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e escrever se
formam ou não um triângulo. OBS: para formar um triângulo, o valor de cada lado deve ser
menor que a soma dos outros 2 lados.
*/

int main(){
    int a, b, c; //informando que v1, v2 e v3 está relacionado aos 3 valores aserem inseridos.
        printf("tamanho do lado A: ");
    scanf("%i", &a);
        printf("tamanho do lado B: ");
    scanf("%i", &b);
        printf("tamanho do lado C: ");
    scanf("%i", &c);
if((a<b)&&(c)){
    printf("forma triangulo ");
        }else{
if((b>a)&&(c)){
    printf("forma triangulo ");
        }else{
if((c<a)&&(b));
    printf("forma triangulo ");
    }else
    }
    }
return 0;
     }
