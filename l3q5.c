#include <stdio.h>
/*
Ler 3 valores (considere que não serão informados valores iguais) e escrever o maior deles.
*/
int main(){
    int v1, v2, v3; //informando que v1, v2 e v3 está relacionado aos 3 valores aserem inseridos.
        printf("Ler primeiro valor: ");
    scanf("%i", &v1);
        printf("Ler segundo valor: ");
    scanf("%i", &v2);
        printf("Ler terceiro valor: ");
    scanf("%i", &v3);
if((v1>v2)&&(v3)){
    printf("O maior é %i", v1);
        }else{
if((v2>v3)&&(v1)){
    printf("O maior é %i", v2);
        }else{
if((v3>v2)&&(v1));
    printf(("O maior é %i", v3));
    }
    }
return 0;
     }


