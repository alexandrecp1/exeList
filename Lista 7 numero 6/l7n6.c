//Alexandre C Peres
#include <stdio.h>

int main(void){
    int h, m, s, ch, cm, chm, total;
    
    //Limpa o console.
    system("cls");

    //Pergunta os numeros.
    printf("Digite a quantidade de horas: ");
        scanf("%d", &h);
        
            printf("Digite a quantidade de minutos: ");
                scanf("%d", &m);
        
                    printf("Digite a quantidade de segundos ");
                        scanf("%d", &s);

    //Converte horas para minutos
    ch = h * 60;
    //Converte minutos das horas para seugundos
    chm = ch * 60;
    //Converte minutos para segundos
    cm = m * 60;

    //Faz a soma total dos valores em segundos
    total = cm + chm + s;

    //Mostra o numero de segundos somados.
    printf("Seus valores convertidos em segundos:  %d\n", total);
    return 0;
}