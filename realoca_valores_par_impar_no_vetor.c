/******************************************************************************
Faça uma função que receba três vetores (v1, v2 e v3) de números inteiros e uma 
variável inteira que representa o tamanho dos vetores. A função deve atribuir 
aos elementos de v3 o elemento de v1 se o valor do elemento for ímpar. Se o 
valor for par, atribuir aos elementos de v2. Por exemplo: com v1={5, 8, 3, 2, 4},
a função deve preencher os vetores da seguinte forma v2={8, 2, 4, ?, ?} e 
v3={5, 3, ?, ?, ?} (considere que o símbolo '?' é lixo de memória). Após o 
processamento dos vetores, sua função deverá imprimir, nessa ordem: Elementos 
de v2 e a média de números pares; Elementos de v3 e a média de números ímpares.
Faça uma função principal para declarar os vetores necessários, ler o número de
elementos utilizados nos vetores, fazer a leitura de v1 do teclado e chamar a 
função elaborada corretamente. Considere que o tamanho máximo dos vetores será 100.
A média deve ser impressa com 4 casas decimais de precisão.
*******************************************************************************/
#include <stdio.h>
#define MAX 100

void leituraVetor(int vet[], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf ("Informe valor para a posição indice %d: ", i);
        scanf("%d", &vet[i]);
    }
}


void atribuielementos (int v1[], int v2[],int v3[], int tamanho){
    int i, j, k;
    int jj, kk, soma;
    j = 0;
    k = 0;
    for (i = 0; i < tamanho; i++){
         if (v1 [i] % 2 == 0){
             v2[j] = v1[i];
             j++;
         }
         else {
             v3[k] = v1[i];
             k++;
             
         }
     }
     soma = 0;
     printf ("v2 \n");
     for (jj = 0; jj < j; jj++){
         printf ("%d\n", v2[jj]);
         soma = soma + v2[jj];
     }
     printf ("media = %.2f\n", (float) soma/j);
     soma = 0;
     
     printf ("\nv3\n");
     
     for (kk = 0; kk < k; kk++){
         printf ("%d\n", v3[kk]);
         soma = soma + v3[kk];
     }
     printf ("media = %.2f\n", (float) soma/k);
     
}

int main()
{
    int vet1 [MAX], vet2 [MAX], vet3 [MAX];
    int tamanho;
    printf ("informe o tamanho: ");
    scanf ("%d", &tamanho);
    leituraVetor(vet1, tamanho);
    atribuielementos (vet1, vet2, vet3, tamanho);

    return 0;
}

