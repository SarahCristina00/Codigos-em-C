/******************************************************************************
Escreva uma função que imprime todos os divisores de um número n inteiro passado
por parâmetro.

Escreva uma função principal (main) que leia um valor inteiro n e chame a função
desenvolvida no item anterior. 

*******************************************************************************/
#include <stdio.h>

void  imprime_divisores (int numero){
    
    int divisao;
    int cont = 1;
    
    while (cont <= numero){
        if (numero % cont == 0){
            printf ("%d\n", cont);
        }
        
        cont++;
}
}

int main()
{
    int numero;
    
    printf ("Informe um número inteiro: ");
    scanf ("%d", &numero);
    imprime_divisores(numero);

    return 0;
}

