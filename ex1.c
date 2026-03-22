#include <stdio.h>

typedef struct {
    int hora;
    int minuto;
    int segundo;
}Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

void preencher(Horario *h)
{
    printf("Digite a hora (0-23):" );
    scanf("%d", &h->hora);
    printf("Digite o minuto (0-59): ");
    scanf("%d", &h->minuto);
    printf("Digite os segundos (0-59): ");
    scanf("%d", &h->segundo);
}

void preencherData (Data *p)
{
    printf("Digite o dia (1-31): ");
    scanf("%d", &p->dia);
    printf("Digite o mês (1-12): ");
    scanf("%d", &p->mes);
    printf("Digite o ano: ");
    scanf("%d", &p->ano);
}

void compromisso(Data *p, Horario *h)
{
    printf("\nHora: %02d:%02d:%02d\n", h->hora, h->minuto, h->segundo);
    printf("\nData: %02d:%02d:%02d\n", p->dia, p->mes, p-> ano);
}

int main()
{
    printf("marque um comprimisso\n");
    Horario h;
    Data p;

    preencher(&h);
    preencherData(&p);

    printf("\n COMPROMISSO MARCADO \n");
    compromisso(&p, &h);

    return 0;
}