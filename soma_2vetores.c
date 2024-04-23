/******************************************************************************
Criando um programa que cria três vetores de cinco posições inteiras, preenche dois
deles com valores lidos do teclado e, ao final, preenche o terceiro vetor 
armazenando, em cada índice, a soma dos elementos de mesmo índice dos outros 
vetores.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor1[5];
    int vetor2[5];
    int vetor3[5];
    int soma;
    int i;
    int j;
    int k;
for (i = 0; i < 5; i++){
        
        printf ("Preencha o vetor 1 na posição %d: ", i);
        
        scanf ("%d", &vetor1[i]);
    }
    printf("Vetor 1: ");
    for (i = 0; i < 5; i++){
    printf ("%d ", vetor1[i]);
    
    }
    printf("\n");
    for (j = 0; j < 5; j++){
        printf ("Preencha o vetor 2 na posição %d: ", j);
        scanf ("%d", &vetor2[j]);
    }
     printf("\n");
     printf("Vetor 2: ");
    for (j = 0; j < 5; j++){
    printf ("%d ", vetor2[j]);
    }
    
    
     printf("\n");
    i = 0;
     j = 0;
    for (k =0; k < 5; k++ ){
        soma = vetor1[i] + vetor2[j];
        vetor3[k] = soma;
        i++;
        j++;
    }
    printf("Vetor resultante: ");
    for (k =0; k < 5; k++){
    printf ("%d ", vetor3[k]);
}
    return 0;
}

