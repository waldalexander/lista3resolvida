#include <stdio.h>
/*
Ler a descrição do produto (nome), a quantidade adquirida e o preço unitário. Calcular e
escrever o total (total = quantidade adquirida * preço unitário), o desconto e o total a pagar
(total a pagar = total - desconto), sabendo-se que:
- Se quantidade <= 5 o desconto será de 2%
- Se quantidade > 5 e quantidade <=10 o desconto será de 3%
- Se quantidade > 10 o desconto será de 5%
*/

int main (){
float t, tt, u, d; //t= total, q=quantidade, t= total, tt=total a paga e u= preço unitário
char nome;
int q;
printf("Qual produto de consulta \n" );
    scanf("%s", &nome);
printf("digite a quantidade adquirida \n");
    scanf("%f", &q);
printf("digite o valor unitário do produto \n");
    scanf("%f", &u);
    t = q * u;
if(q<=5){
            d = (u * 5) / 100; //quando a quantidade é menor igual a 5
    }else{
if(q>5 && q<=10){
            d = (u * 3) / 100; //quando a quantidade é maior que 5 e menor igual a 10
    }else{
            d = (u * 2) / 100; //quando a quantidade é maior que 10
}
    }
printf("seu total a pagar é: %3.f \n", tt = t - d); //
return 0;
}
