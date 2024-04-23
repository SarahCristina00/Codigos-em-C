/******************************************************************************
Criando uma função que ler uma string do teclado e imprime uma “estatística” dos 
caracteres digitados. A função deverá imprimir a 
quantidade total de caracteres digitados, a quantidade de vogais, a quantidade 
de consoantes, e a quantidade de outros caracteres.
Observações:
- Os espaços são contados como caracteres especiais.
- Quando uma vogal é acentuada, o programa considera aquela posição como sendo 
dois caracteres especiais.
- Além disso, o acento agudo é considerado pelo algoritmo como sendo dois 
caracteres.
- O cê-cedilha (ç) é considerado dois caracteres especiais.

*******************************************************************************/
#include <stdio.h>
void func(){
    char string[50];
    int i;
    int numvogais = 0;
    int numconsoante = 0;
    int numoutros = -1;
    int total;
    fgets(string, 50, stdin);
    for(i = 0; string[i] != '\0'; i++){
        if((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122)){
           if(string[i] == 65 || string[i] == 69 || string[i] == 73 || string[i] == 79 || string[i] == 85 || string[i] == 97 || string[i] == 101 || string[i] == 105 || string[i] == 111 || string[i] == 117){
               numvogais++;
           } 
           else{
               numconsoante++;
           }
        }
        else{
            numoutros++;
        }
        total = numoutros + numconsoante + numvogais;
        
    }
    printf("Total de caracteres digitados: %d.", total);
    printf("\n--> Vogais: %d.", numvogais);
    printf("\n--> Consoantes: %d.", numconsoante);
    printf("\n--> Outros: %d.", numoutros);
    return;
}

int main()
{
   func(); 

    return 0;
}
