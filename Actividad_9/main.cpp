/// 3. Una compañía quiere conocer el porcentaje total de ventas y los gastos totales
/// atribuibles a cada vendedor. Cada vendedor se identifica por un número que va del 0
/// al 19. Para cada vendedor se guardan las ventas totales y sus gastos. Escribir un
/// algoritmo que permita introducir las ventas y los gastos para cada vendedor y a
/// partir de ello muestre en la pantalla un informe que contenga: ventas totales de la
/// compañía, gastos totales, y porcentaje de gastos y ventas de cada vendedor sobre el
/// total.

#include <cstdio>

using namespace std;

static const int Nfil = 20;
static const int Ncol = 20;

struct matriz{
    int datos[Nfil][Ncol];
    int numfilas;
    int numColumnas;
};

int main()
{
    matriz Emp;
    Emp.numfilas = 5;
    Emp.numColumnas = 2;
    int suma = 0;
    int gastos = 0;
    int opcion;

    printf("Opcion: ");
    scanf("%d", &opcion);

    if(opcion == 1){
        for(int i= 0; i<Emp.numfilas;i++){
        for(int j=0;j< Emp.numColumnas;j++){
            printf("Introduce datos del vendedor, ventas(0)/gastos(1). Empleado(%d) %d \n", i, j);
            scanf("%d", &Emp.datos[i][j]);
        }
    }


            for(int i=0;i< Emp.numfilas;i++){
                suma += Emp.datos[i][0];
                gastos += Emp.datos[i][1];
        }printf("\nVentas totales: %d", suma);
         printf("\nGastos totales: %d", gastos);

     for(int i= 0; i<Emp.numfilas;i++){
        for(int j=0;j< Emp.numColumnas;j++){
                printf("\nPorcentanje empleado %d : %d %", i, (Emp.datos[i][1]/suma));
        }
     }

    }else{

    matriz psilla;

    }
    return 0;
}

int psilla(matriz a, int f, int c){

    for(int i=0;i<=f;i++){
        for(int j=0; j <=c;j++){
            if((a.datos[i][j] > a.datos[i-1][j-1])&&(a.datos[i][j] > a.datos[i+1][j+1]){
                return v[i][j];
               }
        }
    }


}
