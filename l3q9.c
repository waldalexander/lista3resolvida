#include <stdio.h>
/*
Ler o nome de 2 times e o número de gols marcados na partida (para cada time). Escrever o
nome do vencedor. Caso não haja vencedor deverá ser impressa a palavra EMPATE.
*/

int main(){
int sport, flamengo;
    printf("resultado do jogo \n");
    printf("sport ");
    scanf("%i", &sport);
    printf("flamengo ");
    scanf("%i", &flamengo);
if(sport==flamengo){
    printf("empate");
        }else{
    if(sport>flamengo){
        printf("sport");
        }else{
        printf("flamengo");}
}
        return 0;

}
