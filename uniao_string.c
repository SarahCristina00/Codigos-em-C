/******************************************************************************
Escreva uma função que receba como parâmetro duas strings, strA e strB, e o 
tamanho máximo definido pelo usuário para ambas, t. A função deve completar a 
string strA com os caracteres da string strB sem que o tamanho máximo da string 
seja ultrapassado.
Escreva uma função principal (main) que leia do teclado o tamanho máximo das 
strings, e as duas strings, chame a função desenvolvida no item anterior e 
imprima na tela o resultado obtido.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 500

void interstring (char strA [], char strB[], int t){
    printf("strA: ");
    puts(strA);
    printf("strB: ");
    puts(strB);
    
    int i;
    int j;
    int k;
    for (i = 0; strA[i] != '\0'; i ++){
        
        }
        printf("%d \n", i);
        i = i-1;
        k = i;
        
    for (i = k; strB [i - k] != '\0'; i++){
                strA[i] = strB[i - k];
            }
            strA[i] = '\0';
            strA[t] = '\0';
            
    printf ("string formada: ");
    puts(strA);
}

int main()
{
    int T;
    char str1[TAM];
    char str2[TAM];
    
    printf ("Informe o tamanho das strings: ");
    scanf ("%d", &T);
    printf ("Informe a string A: ");
    fgets (str1, 500, stdin);
    fgets (str1, 500, stdin);
    printf ("\n");
    printf ("informe a string B: ");
    fgets (str2, 500, stdin);
    interstring(str1, str2, T);
    

    return 0;
}


