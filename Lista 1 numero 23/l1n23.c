//Alexandre Peres

#include <stdio.h>

int main(){
    float M, Jcv;

    //Limpa o console.
    system("cls");

    //Pede o comprimento em metros
    printf("Digite o comprimento em metros:\t");
    scanf("%f", &M);

    //Converte em Jardas e mostra o resultado
    Jcv = M/0.91;
    printf("O valor em jardas e: %.2f", Jcv);

    return 0;
}