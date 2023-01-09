/**
* Arquivo: mdc.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 05/01/2023
*/

#include <stdio.h>

int mdc(int a, int b);

int main (void){
    int n_1, n_2, resul;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n_1, &n_2);
    resul = mdc(n_1, n_2);
    printf("%d", resul);
    
    return 0;

}

int mdc(int a, int b){
    if (b == 0) {
        return a;
    }
    else {
        return mdc(b, a % b);
    }
}