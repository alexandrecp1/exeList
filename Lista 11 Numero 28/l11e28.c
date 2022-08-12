//Alexadre C Peres - Lista 11 exercicio 28. Inserir uma string/palavra e inverter a mesma.

#include "config.h" //inclusão das configs.

main(){
    char text[30], aux[30];
    int x, y;

    //Pergunta ao usuario a palavra e salva a string
    printf("Arquivo de entrada: \n");
    gets(text);

    //Calcula a quantidade de caracteres da string em um laço de repetição
    y=strlen(text)-1;
    for( x=0; text[x] != '\0'; x++ ){
        aux[y] = text[x]; y--;
    }
    //Aceita ascentuação e outras palavras para não quebrar.
    aux[x]='\0';
    strcpy( text, aux );

        printf("\nArquivo de saida: \n%s \n \n", text);
        system("pause");
}