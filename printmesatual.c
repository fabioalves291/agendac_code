#include <stdio.h>
#include <time.h>
/*
    programa para imprimir calendario atual, pego no chatgpt
*/
int main() {
    time_t currentTime;
    struct tm *localTime;
    // Obter a hora atual do sistema
    currentTime = time(NULL);
    localTime = localtime(&currentTime);
    printf("%d",currentTime);printf("\n");
    printf("%d",localTime);
    printf("\n");


    // Definir o ano e o mês para o calendário
    int year = localTime->tm_year + 1900;
    int month = localTime->tm_mon + 1;

    // Imprimir cabeçalho do calendário
    printf("Calendário de %d/%d:\n", month, year);
    printf(" Dom Seg Ter Qua Qui Sex Sáb\n");

    // Calcular o dia da semana do primeiro dia do mês
    struct tm firstDay = { .tm_year = year - 1900, .tm_mon = month - 1, .tm_mday = 1 };
    mktime(&firstDay); // normaliza a estrutura
    int firstWeekday = firstDay.tm_wday;

    // Calcular o número de dias no mês
    int daysInMonth;
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        daysInMonth = 29; // Ano bissexto
    } else {
        int daysInMonthLookup[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        daysInMonth = daysInMonthLookup[month - 1];
    }

    // Imprimir espaços para alinhar ao primeiro dia da semana
    for (int i = 0; i < firstWeekday; i++) {
        printf("    ");
    }

    // Imprimir os dias do mês
    for (int day = 1; day <= daysInMonth; day++) {
        printf("%4d", day);

        // Quebrar linha no sábado
        if ((firstWeekday + day) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}
