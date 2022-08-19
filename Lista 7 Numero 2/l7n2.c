//Alexandre C Peres

#include <stdio.h>

//Biblioteca de tempo
#include <time.h>


//Puxa o tempo com a função time
int main(void) {
    time_t mytime;
    
    //Puxa o tempo atual do sistema utilizado
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

    //Limpa o console
    system("cls");

    printf("Data de hoje numeral: %d/%d/%d \n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

    if(tm.tm_mon == 0)
    printf("Data em extenso: %d/Janeiro/%d \n", tm.tm_mday, tm.tm_year + 1900);
    
    else if(tm.tm_mon == 1)
    printf("Data em extenso: %d/Fevereiro/%d \n", tm.tm_mday, tm.tm_year + 1900);

    else if(tm.tm_mon == 2)
    printf("Data em extenso: %d/Março/%d \n", tm.tm_mday, tm.tm_year + 1900);

    else if(tm.tm_mon == 3)
    printf("Data em extenso: %d/Abril/%d \n", tm.tm_mday, tm.tm_year + 1900);

    else if(tm.tm_mon == 4)
    printf("Data em extenso: %d/Maio/%d \n", tm.tm_mday, tm.tm_year + 1900);

    else if(tm.tm_mon == 5)
    printf("Data em extenso: %d/Junho/%d \n", tm.tm_mday, tm.tm_year + 1900);

    else if(tm.tm_mon == 6)
    printf("Data em extenso: %d/Julho/%d \n", tm.tm_mday, tm.tm_year + 1900);

    else if(tm.tm_mon == 7)
    printf("Data em extenso: %d/Agosto/%d \n", tm.tm_mday, tm.tm_year + 1900);

    else if(tm.tm_mon == 8)
    printf("Data em extenso: %d/Setembro/%d \n", tm.tm_mday, tm.tm_year + 1900);

    else if(tm.tm_mon == 9)
    printf("Data em extenso: %d/Outubro/%d \n", tm.tm_mday, tm.tm_year + 1900);

    else if(tm.tm_mon == 10)
    printf("Data em extenso: %d/Novembro/%d \n", tm.tm_mday, tm.tm_year + 1900);

    else if(tm.tm_mon == 11)
    printf("Data em extenso: %d/Dezembro/%d \n", tm.tm_mday, tm.tm_year + 1900);

}