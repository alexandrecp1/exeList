//Alexandre C Peres. 12/08. Lista n2 exemplo numero 4.

#include <stdio.h>

int main(void){
    int a, quadrado, raiz;

    //Limpa oque foi escrito no console anteriormente.
    system("cls");

    //Faz a requisição do numero
    printf("Digite um numero para iniciar: ");
        scanf("%d", &a);

    //Multiplica o numero por ele mesmo, ou seja, ao quadrado. (Uma maneira mais facil e rapida de contornar a mesma.)
    quadrado = (a * a);

    //Faz a raiz do numero. SQRT = n elevado a sua raiz.
    raiz = sqrt(a);
    
    //Exibe o resultado caso o valor seja positivo ou negativo
    if (a > 0)
    printf("O valor inserido elevado ao quadrado:  %d\n", quadrado),
    printf("O valor inserido dentro da raiz:  %d\n", raiz);
    else if(a <= 0)
    printf("O valor inserido foi menor ou igual a zero, logo o valor foi desconsiderado.");
    return 0;
}