#include <stdio.h>

int main(){
    printf("<< Calculo do Quadrado de n >>\n");
    float n, quadrado;    
    printf("Digite um numero real");
    scanf("%f", &n);
    quadrado=n*n;
    return 0;
}

/*
=> Efetuar a leitura de um número real e apresentar o resultado do quadrado desse número.

-------------------------------------------------------------------------------
Exemplo de saída: 
<< Calculo do Quadrado de n>>
Digite um número: 2.5O 
O valor de 2.5 ao quadrado é 6.25
-------------------------------------------------------------------------------
*/