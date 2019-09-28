#include <stdio.h>
/* Calcule e escreva os números ímpares entre 1 (inclusive) e 100 (inclusive). */


int main(){
int n=1;
    while (n <= 100){
        if (n % 2 != 0){
          printf ("%i, ", n);
    }
       n++;
}
return 0;
}
