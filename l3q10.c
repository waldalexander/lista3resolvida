#include <stdio.h>
/*
Ler dois valores e imprimir uma das três mensagens a seguir:
‘Números iguais’, caso os números sejam iguais;
‘Primeiro é maior’, caso o primeiro seja maior que o segundo;
‘Segundo maior’, caso o segundo seja maior que o primeiro.
*/

int main(){
int v1, v2;
scanf("%i" "%i", &v1, &v2);//inserir numeros para comparação
    if(v1==v2){
printf("numeros iguais");
    }else{
if(v1<v2){
printf("segundo é maior");
    }else{
printf("primeiro é maior");
}
    }
return 0;
}

