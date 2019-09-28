#include <stdio.h>

/* Calcule e escreva a média aritmética dos números pares entre 10 (inclusive) e 100 (inclusive). */

int main(){
    int a,b,c,d;
    a=10;
    b=0;
    c=0;
while(a<=100){
        if(a%2==0){
b++;
    c=c+a;
        a++;
}else{
        a++;
}
    }
        d=c/b;
    printf("media aritmetica dos numeros pares de 10 a 100: %i ",d);
return 0;
}
