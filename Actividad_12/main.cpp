#include <cstdio>

int main()
{


    int nota;

    do{
            printf("Introduzca la nota [0-10]: ");
            scanf("%d", &nota);
            if ((nota<0) || (nota>10)) {
                printf("Nota no valida. Valor fuera de rango\n");

            }

    }while ((nota<0) || (nota>10));
    switch (nota) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4: printf("suspenso");
                break;
        case 5:
        case 6: printf("bien");
                break;
        case 7:
        case 8: printf("notable");
                break;
        case 9:
        case 10: printf("sobresaliente");
                break;
    }
    return 0;
}
