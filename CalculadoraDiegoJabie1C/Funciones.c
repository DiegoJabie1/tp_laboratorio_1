#include "Funciones.h"

int funcionSuma(int numeroA, int numeroB)
{
int resultado;
resultado=numeroA+numeroB;
return resultado;
}

int funcionResta(int numeroA, int numeroB)
{
int resultado;
resultado=numeroA-numeroB;
return resultado;
}

float funcionDivision(int numeroA,int numeroB)
{
float resultado;
if(numeroB==0)//valido division por 0 (cero).
{
resultado=-0;
}
else
{
resultado=(float)numeroA/numeroB;
}
return resultado;
}

int funcionMultiplicacion(int numeroA, int numeroB)
{
int resultado;
resultado=numeroA*numeroB;
return resultado;
}

int funcionFactorial(int numero)
{
    int resultado;

    if(numero==0||numero==1)
    {
    resultado=1;
    }
    else
    {
        resultado=numero*funcionFactorial(numero-1);
    }
    return resultado;
}
