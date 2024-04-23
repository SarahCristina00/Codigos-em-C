/******************************************************************************

Escreva uma função que receba como parâmetros as coordenadas cartesianas (X, Y) 
e imprima em qual quadrante este par ordenado está.
Escreva uma função principal (main) que leia as coordenadas cartesianas de uma 
sequência de pontos e chame a função anterior para cada um deles. O programa 
deverá realizar a leitura até que seja digitado o valor 0 (zero) em pelo menos
uma das coordenadas do par (ex: (0,2), (3,0), (0,0)).

*******************************************************************************/
#include <stdio.h>

void quadrante_cartesiano ( int x, int y){
    
    
    while (x != 0 && y != 0){
        
        if (x > 0 && y > 0){
            printf ("Primeiro");
        }
        if (x < 0 && y > 0){
            printf ("Segundo\n");
        }
        if (x < 0 && y <0){
            printf ("Terceiro\n");
        }
        if ( x > 0 && y <0){
            printf ("Quarto\n");
        }
        printf ("\nInforme novamente 2 coordenadas: ");
        scanf ("%d%d", &x, &y);
    }
    
}
    
int main()
{
    int x, y;
    printf ("Informe 2 coordenadas: ");
    scanf ("%d%d", &x, &y);
    quadrante_cartesiano(x,y);

    return 0;
}


