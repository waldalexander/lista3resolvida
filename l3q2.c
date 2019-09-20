#include <stdio.h>
/*
Ler número da conta do cliente, saldo, débito e crédito. Após, calcular e escrever o saldo atual
(saldo atual = saldo - débito + crédito). Também testar se saldo atual for maior ou igual a zero
escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'.
*/
int main(){
    int a,s,d,c;//definido s=saldo, d=debito e c=credito
printf("digite saldo anterior \n");
        scanf("%i", &s);//inserir dados
printf("digite saldo debitado \n");
        scanf("%i", &d); //inserir dados
printf("digite saldo creditado \n");
        scanf("%i", &c);//inserir dados
printf("saldo atual de sua conta: R$ %i \n",(a=s-d+c));
    if (a<=0){
printf("saldo negativo \n");
}else{
printf("saldo positivo \n");
}
return 0;
}

