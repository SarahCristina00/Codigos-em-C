/******************************************************************************

Escrever uma função que leia a matrícula e as três notas obtidas por um aluno durante o semestre. 
Calcular a sua média (aritmética), imprimir a matrícula e sua menção aprovado (media >= 7), 
Reprovado (media <= 5) e Recuperação (média entre 5.1 a 6.9). 
*******************************************************************************/
#include <stdio.h>

void situacao_aluno (){
    int matricula;
    float nota1, nota2, nota3, media;
    
    printf ("Informe a matrícula do aluno: ");
    scanf ("%d", &matricula);
    printf ("Informe as 3 notas obtidas: ");
    scanf ("%f%f%f", &nota1,&nota2,&nota3);
    media = (nota1 + nota2 + nota3) / 3;
    if (media >= 7){
        printf ("Aprovado");
    }
    if (media <= 5){
        printf ("Reprovado");
    }
    if (media > 5 && media < 7){
        printf ("Recuperação");
    }
}

int main()
{
    situacao_aluno();

    return 0;
}

