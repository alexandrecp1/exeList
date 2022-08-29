//Trabalho pratico 1  -  AED I
//Alexandre C Peres

//Importação das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int vet, *alocMem, i;

    //Limpa o console
    system("cls");

    //Armazena quantidade de vetores que o usuario deseja aleatorizar
    printf("Tamanho do Vetor: ");
    scanf("%d", &vet);

    //Alocação de memoria com o Vetor
    alocMem = (int *)(malloc(vet * sizeof(int)));

    //Pega o tempo atual mostrado dentro do relogio//computador para aleatorizar os numeros
    srand(time(NULL));
    printf("\nValores aleatorizados: \n");
    
    //Aleatorização dos valores
    for (int i = 0; i < vet; i++){
        printf("%d ", rand() % 100);
    }

    //Espaçamento para "pressione para continuar"
    printf("\n\n");

    //Pausa o sistema e liberta para não haver desgaste de memória
    free(alocMem);
    system("pause");
    return(0);

}
