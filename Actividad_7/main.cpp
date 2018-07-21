#include <cstdio>

using namespace std;

/*/4
int main()
{
    const int N = 20;

    typedef int vetor[N];

    int aux;
    vetor v;

    for(int i=0;i<N;i++){
        v[i] = i;
        printf("\nnumero: %d", i);
    }

    printf("\n\n");

    for(int i=N-1;i>-1;i--){
        printf("\nnumero: %d", v[i]);
    }
    return 0;
}


//5

int main(){

    const int N = 20;
    typedef int ArraySimple[N];

    ArraySimple v;
    int suma =0;
    int promedio =0;
    int cont = 0;
    for(int i=0;i<N;i++){
        v[i] = i;
    }
    for(int i=0;i<=N;i++){
        if(v[i]%2 == 0){
            suma += v[i];
        }else{
            promedio += v[i];
            cont++;
        }
    }
    printf("\nLa suma es %d", suma);
    printf("\nEl promedio es %d", (promedio/cont));

    for(int i=0;i<N;i++){
        float d;
        d = 1.15*v[i];
        printf("\n\nnum: %f", d);
    }
}

//6

int main(){

    const int N=80;
    typedef int vetor[N];
    vetor urna;
    int bola;

    for(int i=0;i<N;i++){
        urna[i] = 0;
    }

    do{
        do{
            printf("Introduzca una bola: ");
            scanf("%d", &bola);
        }while((bola<0)||(bola>N-1));
        urna[bola] = urna[bola]+1;
    }while(urna[33] != 3);

    for(int i=0;i<N;i++){
        printf("\nLa bola %d sale %d veces", i, urna[i] );
    }

}


const int N=50;
    struct Vector{
        int v[N];
        int numEls;
    };

int buscar(const Vector &vect, int elem);

int main(){

    Vector vect;
    int i =0;
    printf("numEl: ");
    scanf("%d", &vect.numEls);

    for(int i = 0; i <vect.numEls; i++){
        vect.v[i] =  i;
        printf("v[i]: %d", vect.v[i]);
    }
    int num=0;
    num = buscar(vect, 5);
    printf("num: %d", num);
 }

 int buscar(const Vector &vect, int elem){
    int num;
    for(int i=0;i<vect.numEls-1;i++){
        if(vect.v[i] == elem){
            num = i;
        }else{
            num -1;
        }
    }return num;
 }

 const int N=50;
 struct Vector{
    int v[N];
    int numEls;
 };

 int maximo(const Vector &v);

 int main(){

    Vector vect;
    int a;

    printf("Num elem: ");
    do{
    scanf("%d", &vect.numEls);
    }while((vect.numEls < 0)&&(vect.numEls > N));
    for(int i=0;i<vect.numEls;i++){
        vect.v[i] = i;
        printf("%d,", vect.v[i]);
    }
    printf("\n\n");
    vect.v[5] = 30;
    for(int i=0;i<vect.numEls;i++){
        printf("%d,", vect.v[i]);
    }
    a = maximo(vect);
    printf("\n\nPOSICION DEL MAXIMO: %d", a);
 }


 int maximo(const Vector &v){
    int maximo = -1;
    int devo = 0;
    for(int i=0;i < v.numEls;i++){
        if(v.v[i] > maximo){
        maximo = v.v[i];
        devo = i;
    }
    }return devo;
 }
*/


//9

static const int N=5;

struct emp{
    int vect[N];
    int numEls;
};

void juntaEmp(emp a, emp b);

int main(){

    emp Empresa1;
    emp Empresa2;
    emp Empresa3;

    Empresa1.numEls = 3;
    Empresa2.numEls = 3;

    Empresa1.vect[0] = 11111111;
    Empresa1.vect[1] = 33333333;
    Empresa1.vect[2] = 55555555;

    Empresa2.vect[0] = 22222222;
    Empresa2.vect[1] = 44444444;
    Empresa2.vect[2] = 66666666;

    for(int i=0;i<3;i++){printf("\n emp1: %d", Empresa1.vect[i]);}
    for(int i=0;i<3;i++){printf("\n emp2: %d", Empresa2.vect[i]);}

    Empresa3.numEls = Empresa1.numEls + Empresa2.numEls;
    printf("\n mezcla: %d", Empresa3.numEls);


