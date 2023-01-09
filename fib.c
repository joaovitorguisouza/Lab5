/**
* Arquivo: fibonacci.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 05/01/2023
*/

#include <stdio.h>

int fib(int n);

int main() {
  int posicao, resul, i;
  
  printf("Digite o numero de termos da sequencia: ");
  scanf("%d", &posicao);
  
  if (posicao ==0){
    printf("%d",posicao);
  }
  else{
    for (i = 1; i <= posicao; i++) {
    resul = fib(i);
  }
    printf("%d", resul);
  }
  
  return(0);
}

int fib(int n){
    if(n == 0){
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}