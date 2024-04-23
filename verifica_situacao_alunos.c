/******
a) Escreva um programa que leia a nota de um aluno cujo valor está entre 0 e 100. 
O programa deve escrever “REPROVADO” se a nota for inferior a 60 e escrever “APROVADO”, caso contrário.
*******/
#include <stdio.h>

int main (){
    int nota, aluno, contador;
    printf("Informe o número de alunos: ");
     scanf ("%d", &aluno);
        contador = 1;
    
    while (contador <= aluno){
        
        printf("Informe a nota do aluno %d: ", contador);
        scanf("%d", &nota);
        
    if(nota >= 60){
          
        printf("Aluno %d APROVADO!!!\n", contador);
        
    }
    else{
        printf("Aluno %d REPROVADO.\n", contador);

    }  
    contador ++;
    
    }
    return 0;
    }

