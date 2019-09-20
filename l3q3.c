#include <stdio.h>
/*
Ler quantidade atual em estoque, quantidade máxima em estoque e quantidade mínima em
estoque de um produto. Calcular e escrever a quantidade média ((quantidade média =
quantidade máxima + quantidade mínima)/2). Se a quantidade em estoque for maior ou igual
a quantidade média escrever a mensagem 'Não efetuar compra', senão escrever a mensagem
'Efetuar compra'.
*/
int main(){
    int a, m, n, x;//onde a=estoque atual, m=quantidade media, n=quantidade minima e x=quantidade maxima
printf("digite a quantidade atual em estoque: ");
    scanf("%i", &a);
printf("insira a quantidade maxima de estoque: ");
    scanf("%i", &x);
printf("insira a quantidade minima de estoque: ");
    scanf("%i", &n);
printf("sua quantidade media: %i \n",(m=x+n)/2);
    if(a>=m){
printf("Nao efetuar compra");
}else{
    if(a<=m){
printf("Efetuar compra");
}
}
return 0;
}
