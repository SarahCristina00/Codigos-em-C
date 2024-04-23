/******************************************************************************

Criando uma função que recebe um valor inteiro, sendo o tempo de duração em 
segundos de um determinado evento em uma fábrica, a função converte e imprime no
formato hh:mm:ss.

*******************************************************************************/
#include <stdio.h>

void imprime_horas (int segundos){
    int horas;
    int minutos;
    int resto;
    int segundos2;
    
    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos2 = resto % 60;
    
    printf("%.2d:%.2d:%.2d", horas, minutos, segundos2);
    
}

int main()
{
    int segundos;
    printf ("Informe os segundos de duração: ");
    scanf ("%d", &segundos);
    
    imprime_horas(segundos);

    return 0;
}

