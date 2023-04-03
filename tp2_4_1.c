#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

struct Computadora
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_Cpu;
} typedef Compu;

void CargarComputadoras(Compu *PC, int cantidad)
{
    srand(time(NULL));
    for (int i = 0; i < cantidad; i++)
    {

        (*(PC + i)).velocidad = 1 + rand() % 3;
        (*(PC + i)).anio = 2015 + rand() % 9;
        (*(PC + i)).cantidad = 1 + rand() % 8;
        (*(PC + i)).tipo_Cpu = *(tipos + (rand() % 6));
    }
}

void mostrarPc(Compu *PC, int indice)
{
    printf("\n----------PC-------------");
    printf("\nVelocidad: %d", (*(PC + indice)).velocidad);
    printf("\nAnio: %d", (*(PC + indice)).anio);
    printf("\nCantidad: %d", (*(PC + indice)).cantidad);
    printf("\nTipo CPU: %s", (*(PC + indice)).tipo_Cpu);
}
void mostrarComputadoras(Compu *PC, int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        mostrarPc(PC, i);
    }
}

void pcMasVieja(Compu *PC)
{
    int aux = 2023;
    Compu *pcVieja;
    for (int i = 0; i < 5; i++)
    {
        if (aux >= (*(PC + i)).anio)
        {
            aux = (*(PC + i)).anio;
            pcVieja = (PC+i);
        }
    }
    printf("\n\n La PC mas vieja es: \n");
    mostrarPc(pcVieja,0);
}

void pcMasVeloz(Compu *PC)
{
    int aux = 1;
    Compu *pcVeloz;
    for (int i = 0; i < 5; i++)
    {
        if (aux <= (*(PC + i)).velocidad)
        {
            aux = (*(PC + i)).velocidad;
            pcVeloz = (PC+i);
        }
    }
    printf("\n\n La PC mas veloz es: \n");
    mostrarPc(pcVeloz,0);
}

int main()
{
    Compu *PC;
    PC = (Compu *)malloc(5 * sizeof(Compu));
    CargarComputadoras(PC, 5);
    mostrarComputadoras(PC, 5);
    pcMasVieja(PC);
    pcMasVeloz(PC);
    free(PC);
    return 0;
}

// variable = limite_inferior + rand()% (limite_superior + 1 - limite inferior)

/*

*/