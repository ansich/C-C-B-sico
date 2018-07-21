#include <cstdio>

int main(){

    //1

    /*int numero;
    int dias;
    int minutos;
    int horas;
    int resto;

    printf("Introduzca minutos");
    scanf("%d", &numero);

    dias  = numero / 1440;
    resto = numero % 1440;
    horas = resto / 60;
    minutos = resto % 60;
    printf(" %d Dias, %d horas, %d minutos", dias, horas, minutos);


    //2

    int num1;
    int num2;

    printf("Introduzca un numero: ");
    scanf("%d", &num1);
    printf("Introduzca otro numero: ");
    scanf("%d", &num2);

    if (((num1 < 0) && (num2 > 0)) || ((num1 > 0) && (num2 < 0))){
        printf("El resultado es negativo");
    }else{
        if ((num1 == 0 ) || (num2 == 0)){
            printf("Resul nulo");
        }else{
            printf("Resul positivo");
        }
    }

    //3

    int num1;
    int num2;
    int num3;

        printf("introduzca un numero:");
        scanf("%d", &num1);
        printf("introduzca un numero:");
        scanf("%d", &num2);
        printf("introduzca un numero:");
        scanf("%d", &num3);

        if((num1 %2 == 0) && (num2 %2 == 0)){
            printf("los numeros %d y %d son pares.", num1, num2);
        }else{
            if((num1%2 == 0) && (num3%2 == 0)){
                printf("los numeros %d y %d son pares.", num1, num3);
            }else{
                if((num2%2 == 0) && (num3%2 == 0)){
                printf("los numeros %d y %d son pares.", num2, num3);
            }
        }
    }

    //4

    int num1;
    int num2;
    int resultado = 1;

    do{
        printf("Introduzca base: ");
        scanf("%d", &num1);
        printf("Introduzca exponente: ");
        scanf("%d", &num2);
    }while(((num1 <1) && (num2 <1)) || ((num1 <1) || (num2 <1)));

    for(int i=0;i<num2;i++){
        resultado = resultado * num1;
    }
    printf ("El resultado es: %d", resultado);

    //5

    int maximo=0;
    int minimo=0;
    int num;

    printf("introduzca numero 1: ");
    scanf("%d", &num);
        maximo = num;
        minimo = num;
    for(int i=0;i<19;i++){
        printf("introduzca numero %d: ", i+2);
        scanf("%d", &num);
            if (num > maximo){
                maximo = num;
            }else{
                if(num < minimo){
                    minimo = num;
                }
            }
    }

    printf("El maximo es %d y el minimo es %d ", maximo, minimo);



    //6

    int num1;

    printf("introduzca un numero: ");
    scanf("%d", &num1);
    if((num1<1)||(num1>9)){
        printf("ERROR");
    }else{
        if((num1 == 1) || (num1 == 2) || (num1 == 3) || (num1 == 5) || (num1 == 7) || (num1 == 9)){
            printf("primo");
       }else{
            printf("no primo");
       }
    }

    //7

    int num;
    int anterior;
    do {
        printf("Introduce un numero. 0 para terminar: ");
        scanf("%d", &num);
    }while (num<0);

        anterior=num;

    while (num>0){
        do{
            printf("introduce otro numero. 0 para terminar: ");
            scanf("%d", &num);

        if ((num<=anterior) && (num!=0))
            printf("numero no válido\n");
        } while ((num<anterior) && (num!=0));

        if (num!=0)

        anterior=num;
    }

    //8

    int num;
    int cont_pares = 0;
    int suma=0;
    int sumaimp=0;
    int cont_imp = 0;
    float media;

    for(int i=0; i<10;i++){
        printf("numero: ");
        scanf("%d", &num);
        if(num%2 == 0 ){
            cont_pares = cont_pares + 1;
            suma = suma + num;
        }else{
            cont_imp = cont_imp + 1;
            sumaimp = sumaimp + num;
        }
    }

        media = (sumaimp / cont_imp) ;

        printf("Suma pares: %d", suma);
        printf("\nNumero pares: %d", cont_pares);
        printf("\nMedia impares: %f", media);

    */



    return 0;
}
