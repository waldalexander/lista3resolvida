#include <stdio.h>
/*
Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se
que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre
o que ultrapassar este valor, calcular e escrever o seu salário total.
*/

int main(){
    int s,v; //s= salario e v= venda
printf("Digite seu salario fixo: R$ ");
    scanf("%i", &s);
printf("Digite valor de suas vendas mensal: R$ ");
    scanf("%i", &v);
    if(v<=1499){
printf("salario total: R$ %i", ((v*3)/100)+s);
}else{
    if(v>=1500);
printf("salario total: R$ %i", ((v*5)/100)+s);
    }
		return 0;
}



