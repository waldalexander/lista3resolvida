#include <stdio.h>
/*
Ler as idades de 2 homens e de 2 mulheres (considere que as idades dos homens serão
sempre diferentes entre si, bem como as das mulheres). Calcule e escreva a soma das idades
do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo
com a mulher mais velha.
*/

int main(){
int paulo, mateus, ana, raquel;// pré-definido os nomes para os 2 homem e as duas mulheres
printf("ler idade de Paulo: ");
    scanf("%i", &paulo); //inserir valor
printf("ler idade de Mateus - ");
    scanf("%i", &mateus);//inserir valor
printf("ler idade de Raquel - ");
    scanf("%i", &raquel);//inserir valor
printf("ler idade de Ana - ");
    scanf("%i", &ana);
if ((paulo>mateus)&&(raquel>ana)){
printf("soma das idades de Paulo e Ana: %i. De Mateus e Raquel: %i", (paulo+ana), (mateus+raquel));
        }else{
if ((mateus>paulo)&&(raquel>ana))
printf("soma das idades de Mateus e Ana: %i. De Paulo e Raquel: %i", (mateus+ana), (paulo+raquel));
}
return 0;
}
