/**
* Arquivo: aproxpi.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 05/01/2023
*/

#include <stdio.h>
#include <math.h>

float aproximacaoDePi(int i);

int main(void){
    int l;
    printf("Determine o limte: ");
    scanf("%d", &l);
    
    float valorDePi;

    for(int i = 0; i <= l; i++){
        valorDePi = aproximacaoDePi(i);
    }

    printf("%f", valorDePi);

    return 0;
}

float aproximacaoDePi(int i) {
    if (i == 0){
        return 4;
    }
    else {
        return aproximacaoDePi(i-1) + 4*(pow(-1,i)/(2*i + 1));
    }

}
