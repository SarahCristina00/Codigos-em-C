/******************************************************************************

Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba um valor n por parâmetro e retorne seu fatorial.
Escreva uma função principal (main) para ler um valor n, chamar a função 
desenvolvida no item anterior e imprimir na tela o resultado obtido.
*******************************************************************************/
#include <stdio.h>
    double fatorial (double n){
        double resultado = n;
        double fat;
    
    if (n == 0){
        resultado = 1;
    }
    
    else {
        for (fat = 1; fat < n; fat++){
        resultado = resultado *  fat;
    }
    }
    
    
    return resultado;
}


int main()
{
    double n;
    double resultado;
    printf("Informe um número para o calculo do Fatorial: ");
    scanf ("%lf", &n);
    resultado = fatorial(n);
    printf ("%.0lf! = %.0lf",n, resultado);

    return 0;
}


