/******************************************************************************
Escreva uma função que receba como parâmetro a idade de uma pessoa (inteiro) e 
imprima:
"Criança", se idade < 13;
"Adolescente", se 13 ≤ idade < 20;
"Adulto", se 20 ≤ idade < 65;
"Idoso", se idade ≥ 65.
 
Escreva também uma função principal (main) que leia do teclado uma idade e chame
a função desenvolvida no item anterior.

*******************************************************************************/
#include <stdio.h>

void classificacao_idade (int idade){
    if (idade < 13){
      printf ("Criança");  
    }
    if (idade >= 13 && idade < 20){
        printf ("Adolescente");
    }
    if (idade >= 20 && idade <65){
        printf ("Adulto");
    }
    if (idade >= 65){
        printf ("Idoso");
    }
}

int main()
{
    int idade;
    printf ("Informe a idade: ");
    scanf ("%d", &idade);
    classificacao_idade(idade);

    return 0;
}

