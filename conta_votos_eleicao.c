/******************************************************************************

Em uma eleição para prefeito, existem quatro candidatos. A cidade tem 25 mil 
eleitores, embora nem todos participem da eleição. Cada eleitor indica seu voto
através de um único número inteiro, da seguinte forma:
1, 2, 3, 4 = voto para os respectivos candidatos;
0 = voto em branco;
Qualquer outro valor positivo = voto nulo.
a) Elabore uma função que leia todos os votos, armazenando-os. Assuma que a 
sequência de votos será finalizada por um número negativo. A função deve 
retornar o número de votos computados.
b) Faça uma segunda função que receba o número de votos armazenados e a relação 
completa de votos e imprima o resultado completo da eleição 
(número de votos nulos, brancos e de cada candidato).
c) Faça um programa para computar e apurar a eleição que chame as funções acima.

*******************************************************************************/
#include <stdio.h>
#define TAM 25000 

void resultado(int numvotos,int votos[]){
    int i;
    int branco = 0;
    int nulo = 0;
    int cand1 = 0; 
    int cand2 = 0; 
    int cand3 = 0;
    int cand4 = 0; 
    for(i = 0; i < numvotos; i++){
        if(votos > 0){
        switch(votos[i]){
            case 0:
                branco++;
                break;
            case 1:
                cand1++;
                break;
            case 2:
                cand2++;
                break;
            case 3:
                cand3++;
                break;
            case 4:
                cand4++;
                break;
            default:
            nulo++;
        }
        
        }
    }
    printf("Total de votos: %d \n",numvotos);
    printf("Votos do candidato 1: %d \n", cand1);
    printf("Votos do candidato 2: %d \n", cand2);
    printf("Votos do candidato 3: %d \n", cand3);
    printf("Votos do candidato 4: %d \n", cand4);
    printf("Votos em branco: %d \n", branco);
    printf("Votos nulos: %d \n", nulo);
    return;
}

int contavoto(){
    int votos[TAM];
    int i;
    int numerovotos = 0;
    for(i = 0; i < TAM; i++){
        printf("Digite o voto %d: \n", i + 1);
        scanf(" %d", &votos[i]);
        if(votos[i] < 0){
            numerovotos = i;
            i = TAM;
        }
    }
    
    resultado(numerovotos, votos);
    return numerovotos;
    printf("%d", numerovotos);
}

int main()
{
contavoto();
    return 0;
}

