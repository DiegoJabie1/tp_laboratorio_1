#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int numeroA;
    int numeroB;
    int sumar;
    int restar;
    float dividir;
    int multiplicar;
    int factorialA;
    int factorialB;
    int opcion;
    char seguir='s';

    do
    {
        printf("Elija una opcion : \n1. Ingresar 1er operando (A=x).\n2. Ingresar 2do operando (B=y). \n3. Calcular todas las operaciones. \n4. Informar resultados. \n5. Salir.\n\nOpcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            printf("\n1. Ingrese el 1er operando (A=x): ");
            scanf("%d",&numeroA);
            system("cls");
            printf("1. Se ingreso 1er operando (A=%d).\n\n",numeroA);
            break;
        case 2:
           printf("\n2. Ingrese el 2do operando (B=y): ");
           scanf("%d",&numeroB);
           system("cls");
           printf("1. Se ingreso 1er operando (A=%d).",numeroA);
         printf("\n2. Se ingreso 2do operando (B=%d).\n\n",numeroB);
            break;
        case 3:
            sumar=funcionSuma(numeroA,numeroB);
            restar=funcionResta(numeroA,numeroB);
            dividir=funcionDivision(numeroA,numeroB);
            multiplicar=funcionMultiplicacion(numeroA,numeroB);
            factorialA=funcionFactorial(numeroA);
            factorialB=funcionFactorial(numeroB);
            system("cls");
            printf("1. Se ingreso 1er operando (A=%d).",numeroA);
            printf("\n2. Se ingreso 2do operando (B=%d).\n",numeroB);
            printf("3. Se calcularon todas las operaciones.\n\n");
            break;
        case 4:
            system("cls");
            printf("1. Se ingreso 1er operando (A=%d).",numeroA);
            printf("\n2. Se ingreso 2do operando (B=%d).\n",numeroB);
            printf("3. Se calcularon todas las operaciones.\n");
            printf("4. a) El resultado de A+B es: %d.\nb) El resultado de A-B es: %d.\n",sumar,restar);
            if(dividir==-0)
            {
                printf("c) No se puede dividir por cero."); //valido division por 0 (cero).
            }
            else
            {
                printf("c) El resultado de A/B es:%f.", dividir);
            }
            printf ("\nd) El resultado de A*B es: %d.\ne) El factorial de A es: %d y el factorial de B es: %d. \n\n",multiplicar,factorialA,factorialB);
            break;
        case 5:
            seguir='n';
            break;
        default:
            printf("No ingreso una opcion valida.\n");
            break;
        }
    }while(seguir=='s');

    system("pause");

    return 0;
}
