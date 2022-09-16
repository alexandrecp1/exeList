//Alexandre Peres. Ler 10 inteiros e somar

#include <stdio.h>

int main(){
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, soma;
    
    //Limpa o console.
    system("cls");

    //Pergunta o numero citado.
    printf("Insira o valor 1: ");
        scanf("%d", &num1);

            printf("Insira o valor 2: ");
        scanf("%d", &num2);

            printf("Insira o valor 3: ");
        scanf("%d", &num3);

            printf("Insira o valor 4: ");
        scanf("%d", &num4);

            printf("Insira o valor 5: ");
        scanf("%d", &num5);

            printf("Insira o valor 6: ");
        scanf("%d", &num6);

            printf("Insira o valor 7: ");
        scanf("%d", &num7);

            printf("Insira o valor 8: ");
        scanf("%d", &num8);
        
            printf("Insira o valor 9: ");
        scanf("%d", &num9);

            printf("Insira o valor 10: ");
        scanf("%d", &num10);

    //Dobra o valor
    soma = (num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10);

    //Mostra o numero inteiro na tela.
    printf("A soma dos valores:  %d\n", soma);
    return 0;

}