#include <cstdio>

using namespace std;

/*
//3
int numMayor( int n1, int n2, int n3);

int main(){

    int n1 = 4;
    int n2 = 7;
    int n3 = 3;
    int mayor;

    mayor = numMayor(n1,n2,n3);
    printf("El mayor es %d", mayor);

}

int numMayor( int n1, int n2, int n3){

    int mayor;

    if ((n1>n2) && (n1>n3)){
            mayor = n1;
    }else{
        if ((n2>n1) && (n2>n3)){
            mayor = n2;
        }else{
            mayor = n3;
        }
    }
        return mayor;
}

int cuentaCaracter(char car, int &cont){
    cont = 0;
    char c;

    do{
        printf("Introduzca un caracter(+,-,*,/): ");
        scanf("%c", &c);
        if (c == car){
        cont = cont + 1;
    }
    }while (c != '.');

}

int cuentaCaracter(char c);

int main(){
    char caracter;
    int cont;
    printf("que caracter desea contar: ");
    scanf("%c", &caracter);
    cuentaCaracter(caracter, cont);
    printf("El numero de veces que aparece el caracter %c es: %d", caracter, cont);

}

//8

int factorial(int num){
    int fact = 1;

    for(int i=0 ;i < num; i++){
        fact = fact * (i+1);
    }
    return fact;
}

int combinatorio(int m, int n){
    int a = factorial(m);
    int b = factorial(n);
    int comb = 0.00;
    int c = m - n;
    comb = a/(b*factorial(c));
    return comb;
}

int main(){
    int a = 1;
    int b = 3;
    int c;
    c = combinatorio(b,a);
    printf("\n%d" , c);
}

//9

bool esPerfecto(int num){
    int suma=0;
    bool perfecto;

    for(int i=1; i <= num/2; i++){
        if(num % i == 0){
            suma = suma +i;
        }
    }

    perfecto= (suma == num);
    return perfecto;
}

int main(){

int a = 6;
int m = 0;
int n = 3000;

    for(int i=m; i<n; i++){
        if(esPerfecto(i)){
            printf("\n%d", i);
        }
    }
}*/

//10
