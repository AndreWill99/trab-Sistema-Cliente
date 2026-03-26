#include <time.h>
#include <math.h>
#include "crm.h"

int calcularDiferencaDias(struct tm data_cap){
    time_t agora = time(NULL);
    time(&agora);
    
    struct tm cap = data_cap;
    cap.tm_hour = 0; cap.tm_min = 0; cap.tm_sec = 0;
    cap.tm_isdst = -1;
    
    time_t tempo_cap = mktime(&cap);
    if (tempo_cap == -1) return -1; //Erro na data

    double diferenca_segundos = difftime(agora, tempo_cap);

    //converte para dias
    int dias = (int) (diferenca_segundos / 86400);

    return (dias < 0) ? 0 : dias;
}