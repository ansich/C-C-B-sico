#include <cstdio>

using namespace std;

int main(){

const int N=5;

typedef int vecto[N];

    vecto Urna;

    int nota;

    printf("Introduzca nota Mates, Quimica, Lengua, Historia y Economia: ");
    for(int i=0; i<N;i++){
        scanf("%d", &nota);
        Urna[i] = nota;
    }
for(int i=0; i<N;i++){
    switch(Urna[i]){
        case 1:
        case 2:
        case 3:
        case 4: printf("\nSuspenso");
        break;
        case 5:
        case 6: printf("\nBien");
        break;
        case 7:
        case 8: printf("\nNotable");
        break;
        case 9:
        case 10: printf("\nSobresalido");
        break;
        }
    }
}
