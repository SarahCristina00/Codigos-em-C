/******************************************************************************
Criando um algoritmo para calcular a maior distância entre dois pontos dentro 
de um conjunto de N pontos tal que N=10
1. criando a estrutura Ponto para armazenar as duas coordenadas reais x e y;
2. criando uma função que recebe as duas estruturas representando dois pontos e 
retorne a distância entre eles, dada pela fórmula 
3. Criando uma função principal que gera um vetor de 10 pontos, ler os dados 
de cada ponto e imprime a maior distância entre os pontos desse conjunto com 
duas casas decimais.

*******************************************************************************/
#include "stdio.h"
#include "math.h"

typedef struct
{
    float x;
    float y;
}coordenada;

float recebe_struct ( coordenada pontoA, coordenada pontoB){
    float distancia;
    distancia = sqrt (pow (pontoA.x - pontoB.x, 2) + pow (pontoA.y - pontoB.y, 2));
    
    return distancia;
}
    



int main()
{
    coordenada vetponto [10];
    int i;
    int j;
    float maior = 0;
    float resultado;
    for (i = 0; i < 10; i ++){
    printf ("\nInforme a coordenada x do ponto %d: ", i);
    scanf ("%f", &vetponto[i].x );
    printf ("\nInforme a coordenada y do ponto %d: ", i );
    scanf ("%f", &vetponto[i].y );
    }
    for (i = 0; i < 10; i ++){
        for(j - 0; j < 10; j++){
    resultado = recebe_struct(vetponto[i], vetponto[j]);
    if(resultado > maior){
        maior = resultado;
    }
    }
    }  
  for (i = 0; i < 10; i ++){
    printf ("\nPonto i: (%f, %f)", vetponto[i].x, vetponto[i].y);
      }
      
      printf("\nMaior distancia: %f", maior);

    return 0;
}



