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
printf("ler idade de Mateus: ");
    scanf("%i", &mateus);//inserir valor
printf("ler idade de Raquel: ");
    scanf("%i", &raquel);//inserir valor
printf("ler idade de Ana: ");
    scanf("%i", &ana);//inserir valor
if (paulo>mateus && raquel>ana){ /*combinação do homem mais velho com a mulher mais nova e a mulher
                                    mais velha com homem mais novo, com os sinais ">".*/
printf("soma das idades de Paulo e Ana: %i. De Raquel e Mateus: %i", (paulo+ana), (raquel+mateus));//paulo e raquel mais velhos
        }else{
if (mateus>paulo && ana>raquel){
printf("soma das idades de Mateus e Raquel: %i. De Ana e Paulo: %i", (mateus+raquel), (paulo+raquel));//mateus e ana mais velhos
        }else{
if (paulo>mateus && ana>raquel){
printf("soma das idades de Paulo e Raquel: %i. De Ana e Mateus: %i", (paulo+raquel), (ana+raquel));//paulo e ana mais velhos
        }else{
printf("soma das idades de Mateus e Ana: %i. De Raquel e Paulo: %i", (mateus+ana), (raquel+mateus));//mateus e raquel mais velhos
}
    }
        }
return 0;
}
