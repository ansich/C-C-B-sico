#include <cstdio>

using namespace std;

const int MAX = 100;

struct matriz{
    int datos[MAX][MAX];
    int nFil;
    int nCol;
};

void rellenar(matriz &m);
void mostrar(matriz m);
int simetrica(matriz &m);

int main(){

    matriz m1;
    matriz m2;
    char c1[4] = 'alo';
    char c2[4] = 'ola';

    if(length))
        for(int i=0;i<n)

    rellenar(m1);
    mostrar(m1);
    printf("\nsim: %d", simetrica(m1));
    rellenar(m2);
    mostrar(m2);


}

void rellenar(matriz &m){

    int v;

    printf("\nIntroduce numero de filas,\ndespues numero de columnas: ");
    scanf("%d", &m.nFil);
    scanf("%d", &m.nCol);

    for(int i=0;i<m.nFil;i++){
        for(int j=0;j<m.nCol;j++){
            printf("\nValor fila %d columna %d: ", i+1, j+1);
            scanf("%d", &m.datos[i][j]);
        }
    }
}

void mostrar(matriz m){

    for(int i =0;i<m.nFil;i++){
        for(int j =0;j<m.nCol;j++){
            printf("\nValor fila %d columna %d: ", i+1, j+1);
            printf("%d", m.datos[i][j]);
        }
    }
}

int simetrica(matriz &m){
    int a=1;
    int b=-1;

    for(int i=0;i<m.nFil;i++){
        for(int j=0;j<m.nCol;j++){
            if(m.datos[i][j] = m.datos[j][i]){
                return a;
            }else{
                return b;
            }
        }
    }
}
