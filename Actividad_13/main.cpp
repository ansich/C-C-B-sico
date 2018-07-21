#include <cstdio>

int Mayorde3 (int num1, int num2, int num3);
void LeerDatos (int &num1, int &num2, int &num3);

int main()
{
    int num1;
    int num2;
    int num3;
    int mayor;

    LeerDatos(num1, num2, num3);
    mayor=Mayorde3(num1, num2, num3);

    printf("El mayor es %d", mayor);

    return 0;
}

void LeerDatos (int &num1, int &num2, int &num3)
{
    printf("Introduzca el primer numero");
    scanf("%d", &num1);

    printf("Introduzca el segundo numero");
    scanf("%d", &num2);

    printf("Introduzca el tercer numero");
    scanf("%d", &num3);

}

int Mayorde3(int num1, int num2, int num3)
{
    int mayor;

    if ((num1>num2) && (num1>num3))
        mayor=num1;
    else if ((num2>num1) && (num2>num3))
            mayor=num2;
         else if ((num3>num1) && (num3>num2))
            mayor=num3;

    return mayor;
}
