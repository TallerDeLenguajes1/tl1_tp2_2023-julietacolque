#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
} typedef Compu;

void cargarPc(Compu *PC)
{

    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    srand(time(NULL));
    for (int i = 0; i < 4; i++)
    {
        
        PC->velocidad = 1 + rand() % 3;
        PC->anio = 2015 + rand() % 9;
        PC->cantidad = 1 + rand() % 8;
        PC->tipo_cpu = tipos[0+rand()%6];
        *PC++;

        
}
}

void mostrarPc(Compu *PC)
{
     char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    for (int i = 0; i < 4; i++)
    {
        printf("\n----------PC %d -------------", i);
        printf("\nVelocidad: %d", PC->velocidad);
        printf("\nAnio: %d", PC->anio);
        printf("\nCantidad: %d", PC->cantidad);
        printf("\nTipo CPU: %s", PC->tipo_cpu);

        *PC++;
    }
}

int main()
{
    Compu arreglo[4], *punt; // defini un arreglo de estructuras.
    punt = arreglo;
    cargarPc(punt);
    mostrarPc(punt);
    return 0;
}

// variable = limite_inferior + rand()% (limite_superior + 1 - limite inferior)