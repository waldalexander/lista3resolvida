#include <stdio.h>
/*
Ler 3 valores (considere que não serão informados valores iguais) e escrevê-los em ordem
crescente.
*/

int main(){
    int v1, v2, v3;
printf("digite primeiro numero \n");
    scanf ("%i", &v1);
printf("digite segundo numero \n");
    scanf ("%i", &v2);
printf("digite terceiro \n");
    scanf ("%i", &v3);
if(v1 > v2 && v2 > v3){
   printf("ordem crescente: \n%i%i%i", v1,v2,v3);//os valores digitados são printados em ordem crescente
        }else{
if (v2 > v3 && v3 > v1){
    printf ("ordem crescente: \n%i%i%i", v2,v3,v1);
        }else{
if(v3 > v1 && v1 > v2){
    printf("ordem crescente: \n%i%i%i", v3,v1,v2);
        }else{
if(v1 > v3 && v3 > v2){
    printf("ordem crescente: \n%i%i%i", v1,v3,v2);
        }else{
    printf("ordem crescente: \n%i%i%i", v2,v1,v3);
}
    }
        }
}
    return 0;
    }
