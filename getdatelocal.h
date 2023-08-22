
struct Date {int day; int month; int year;};

struct Date getdatelocal() {
    time_t currentTime;
    struct tm *localTime;
    struct Date date;

    // Obter a hora atual do sistema
    currentTime = time(NULL);
    localTime = localtime(&currentTime);
    // Obter os componentes da data
    int day = localTime->tm_mday;
    int month = localTime->tm_mon + 1;
    int year = localTime->tm_year + 1900;
    date.day = day;
    date.month = month;
    date.year = year;
    // Imprimir a data no formato "dd/mm/yyyy"
    // sprintf(datestring,"%02d/%02d/%d\n", day, month, year);
    // printf("%s",datestring);
    // printf("%d\n",date);
    return date;
}
