//Alexandre C Peres. 12/08. Lista n1 exemplo numero 3. Somar o valor de três números.

#include <stdio.h>

int main(void){
    int a, b, c, resultado;

    //Limpa oque foi escrito no console anteriormente.
    system("cls");

    //Faz a requisição dos três números para a soma
    printf("Digite o primeiro numero que deseja somar: ");
        scanf("%d", &a);

    printf("Digite o segundo numero que deseja somar: ");
        scanf("%d", &b);

    printf("Digite o terceiro numero que deseja somar: ");    
        scanf("%d", &c);


    //Exibe o resultado na tela
    resultado = (a + b + c);
    printf("O valor da soma dos tres numeros eh igual a:  %d\n", resultado);
    return 0;
}