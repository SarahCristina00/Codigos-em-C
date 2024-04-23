/******************************************************************************
Faça um programa para ler o código de um produto do teclado e informar sua origem.
 Código do produto entre 01 e 20: "Europa";
Código do produto entre 21 e 40: "Ásia";
Código do produto entre 41 e 60: "América";
Código do produto entre 61 e 80: "África";
Código do produto maior que 80: "Paraguai";
Código fora das faixas de valores acima: "Código Inválido".
*******************************************************************************/
#include <stdio.h>

int main()
{
    int codigo;
    printf ("Informe o código do produto: ");
    scanf ("%d", &codigo);
    
    if ( codigo > 0 && codigo <= 20){
        printf ("Origem do produto: Europa");
    }
    else {
        if (codigo >= 21 && codigo <= 40){
            printf ("Origem do produto: Ásia");
        }
        if (codigo >= 41 && codigo <= 60){
            printf ("Origem do produto: América");
        }
        if (codigo >= 61 && codigo <= 80){
            printf ("Origem do produto: África");
        }
        if (codigo > 80){
            printf ("Origem do produto: Paraguai");
        }
        if (codigo <0){
        printf ("Origem do produto: Código Inválido");
    }
    }

    return 0;
}

