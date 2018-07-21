#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    //3

    float gradosF;
    float gradosC;
    printf("Introduzca los grados Fahrenheit: ");
    scanf("%f", &gradosF);
    gradosC = 5.0/9 * (gradosF - 32);
    printf("%.2f grados Fahrenheit son %.2f grados Celsius", gradosF,
    gradosC);

    //4

    const float pi = 3.1416;
    float radio;
    float volumen;

    printf("\n\n");
    printf("Introduzca radio: ");
    scanf("%f", &radio);

    volumen = pi * radio * radio;

    printf("El volumen es: %.3f", volumen);

    printf("\n\n");

    //5

    int nota;

    printf("Introduzca nota: ");
    do{
        scanf("%d", &nota);
    }while((nota<0)&&(nota>10));
    switch(nota){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4: printf("Suspenso");
            break;
        case 5:
        case 6: printf("Bien");
            break;
        case 7:
        case 8: printf("Notable");
            break;
        case 9:
        case 10: printf("Sobre");
            break;
    }

    //6

    float media;
    float cuad;
    float desvi;
    float uno;
    float dos;
    float tres;
    float cuatro;

    printf("Introduzca los 4 numeros :");
    scanf("%f", &uno);
    scanf("%f", &dos);
    scanf("%f", &tres);
    scanf("%f", &cuatro);

    media = (uno + dos + tres + cuatro) / 4.0;
    cuad = (uno-media)*(uno-media)+(dos - media)*(dos - media)+(tres - media)*(tres - media)+(cuatro - media)*(cuatro - media);
    desvi = (cuad/4.0);
    printf("La desvi es: %f", desvi);

    //7

    //Diseñar un algoritmo que lea 20 caracteres del teclado y muestre por pantalla el
    //número de veces que se repiten cada una de las vocales.

    char car;
    int cont_a = 0;
    int cont_e = 0;
    int cont_i = 0;
    int cont_o = 0;
    int cont_u = 0;

        printf("\nIntroduzca 20 caracteres: ");
    for(int i=0; i < 20; i++){
        printf("\nIntroduzca el caracter %d: ", i);
        scanf(" %c", &car);

        switch(car){

            case 'a': cont_a = cont_a + 1;
                break;
            case 'e': cont_e = cont_e + 1;
                break;
            case 'i': cont_i = cont_i + 1;
                break;
            case 'o': cont_o = cont_o + 1;
                break;
            case 'u': cont_u = cont_u + 1;
                break;
        }
    }
        printf("\na: %d \t", cont_a);
        printf("\ne: %d \t", cont_e);
        printf("\ni: %d \t", cont_i);
        printf("\no: %d \t", cont_o);
        printf("\nu: %d \t", cont_u);


    //8

    int num1;
    int num2;
    char op;

    printf("Introduzca primer numero: ");
    scanf("%d", &num1);
    printf("\nIntroduzca segundo numero: ");
    scanf("%d", &num2);


    do {
        printf("Que operacion desea realizar (+,-,x,/)? ");
        fflush(stdin);
        scanf("%c",&op);
    if ((op!='+') and (op!='-') and (op!='x') and (op!='/'))
        printf("Operacion no valida\n");
    }while ((op!='+') and (op!='-') and (op!='x') and (op!='/'));

    switch (op){
    case '+': printf ("La suma es %d", num1+num2);
        break;
    case '-': printf ("La diferencia es %d", num1-num2);
        break;
    case 'x': printf ("El producto es %d", num1*num2);
        break;
    case '/': if (num2 !=0)
        printf ("La división es %f", (float)num1/num2);
    else
        printf (" ERROR ");
        break;
}

    //9

    int suma = 0;
    int valor;

    for (int i= 1; i < 21; i++){
        printf("Introduzca el caracter %d: ", i);
        scanf("%d", &valor);
        suma = suma + valor;
    }

    printf("El promedio es: %d", suma/20);


    //10

    int producto = 1;
    int num;

        printf("Introduzca el numero del factorial: ");
        scanf("%d", &num);
    for (int i= 1; i < num + 1; i++){
        producto = producto * i;
    }

    printf("El factorial es: %d", producto);


    //11

    int i;
    int n;
    int suma;
    do {
        printf("Introduzca un numero entero positivo: ");
        scanf("%d", &n);
    }while (n<=0);
        suma = 0;
        i = 1;
        while (i <= 2 * n) {
        suma = suma + i;
        i = i + 2;
    }
        printf("La suma de los %d primeros numeros impares es %d", n, suma);

    //12

    int i;
    long int suma;
        suma = 0;
        printf(" Suma de multiplos de 5 y 7 [1-500] ");
    for(i=1;i<=500;i++){
        if ((i%5==0)&&(i%7==0)){
            printf ("%d - ", i);
            suma=suma + i;
        }
    }
    printf("\nLa suma es %ld", suma);

    return 0;

}




