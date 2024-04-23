/******
Rand
*******/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int sorteado;
    srand(time(NULL));
    
    sorteado = rand() % 100 + 1 ;
    printf("Primeiro valor sorteado: %d\n", sorteado);
    
    sorteado = rand() % 100 + 1 ;
    printf("Segundo valor sorteado: %d\n", sorteado);
    
    sorteado = rand() % 100 + 1 ;
    printf("Terceiro valor sorteado: %d\n", sorteado);
    
    
    
    return 0;
}






