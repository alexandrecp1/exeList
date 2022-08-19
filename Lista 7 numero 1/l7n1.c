//Andreii B. 12/08. Lista n1 exemplo numero 1. O coputador tava apresentando algumas falhas então fiz um basico pra testes

#include <stdio.h>

int main(void){
    int a, dobro;
    
    //Limpa o console.
    system("cls");

    //Pergunta o numero citado.
    printf("Digite um numero inteiro para dobrar-lo: ");
        scanf("%d", &a);

    //Dobra o valor
    dobro = a * 2;

    //Mostra o numero inteiro na tela.
    printf("Seu valor dobrado:  %d\n", dobro);
    return 0;
}