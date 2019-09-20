#include <stdio.h>
/*
Ler um valor e escrever se é positivo, negativo ou zero.
*/
int main(){
    int n;//n = valor a ser lido
    printf("digite um numero \n");
        scanf("%i", &n);
        if (n>0){
    printf("positivo");
}else{
        if (n<0){
    printf("negativo");
}else{
    printf("zero");
}
return 0;
}
}
