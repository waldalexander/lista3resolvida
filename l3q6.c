#include <stdio.h>
/*
Ler 3 valores (considere que não serão informados valores iguais) e escrever a soma dos 2
maiores.
*/

int main(){
    int v1, v2, v3; //informando que v1, v2 e v3 está relacionado aos 3 valores aserem inseridos.
        printf("Ler primeiro valor: ");
    scanf("%i", &v1);
        printf("Ler segundo valor: ");
    scanf("%i", &v2);
        printf("Ler terceiro valor: ");
    scanf("%i", &v3);
if((v1>v2)&&(v3>v2)){
    printf("Soma dos valores maiores: %i", (v1+v3));
        }else{
if((v2>v3)&&(v1>v3)){
    printf("Soma dos valores maiores: %i", (v2+v1));
        }else{
if((v3>v2)&&(v2>v1));
    printf("Soma dos valores maiores %i", (v2+v3));
    }
}
return 0;
}
