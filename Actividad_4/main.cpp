#include <cstdio>

using namespace std;

 enum TipoPeli{ t, m, a, i };

struct Fecha{
    int dia;
    int mes;
    int anho;
};

struct Artista{
    char nombre[10];
    char apellidos[20];
    Fecha fnac;
};

struct Pelicula{
    int codigo;
    char titulo[20];
    TipoPeli genero;
    Artista artistappal;
};

    void rellenar(Pelicula &p);
    void mostrarPeli(Pelicula p);

int main()
{

    ///1. Definir la estructura registro necesaria para almacenar la información
    ///correspondiente a una película sabiendo que los datos que se desean almacenar
    ///son: código, título, género (terror, musical, acción, infantil ) y artista principal
    ///(nombre, apellidos, fecha de nacimiento (día, mes y año)).

    Pelicula p;

    rellenar(p);
    mostrarPeli(p);



}

void rellenar ( Pelicula &p){
    char d;
    printf("\nCodigo de la pelicula: ");
    scanf("%d", &p.codigo);
    printf("Titulo: ");
    scanf("%s", &p.titulo);

    fflush(stdin);
    printf("Genero (terror[t], musical[m], accion[a], infantil[i] ");
    scanf("%c", &d);
    switch(d){
        case 't': p.genero = t;
        break;
        case 'm': p.genero = m;
        break;
        case 'a': p.genero = a;
        break;
        case 'i': p.genero = i;
        break;

    }
    printf("\nIntroduzca datos artista principal:\nNombre: ");
    scanf("%s", &p.artistappal.nombre);
    printf("\nApellidos: ");
    scanf("%s", &p.artistappal.apellidos);
    printf("\nAhora su fecha de nacimiento: ");
    printf("Dia: ");
    scanf("%d", &p.artistappal.fnac.dia);
    printf("Mes: ");
    scanf("%d", &p.artistappal.fnac.mes);
    printf("Anho: ");
    scanf("%d", &p.artistappal.fnac.anho);
}

void mostrarPeli(Pelicula p){


printf("\nCodigo de la pelicula: %d", p.codigo);
    printf("Titulo: %s", p.titulo);
    printf("\nDatos artista principal: ");
    printf("\nNombre: %s", p.artistappal.nombre);
    printf("\nApellidos: %s", p.artistappal.apellidos);
    printf("\nAhora su fecha de nacimiento: ");
    printf("\n%d", p.artistappal.fnac.dia);
    printf("/%d", p.artistappal.fnac.mes);
    printf("/%d", p.artistappal.fnac.anho);
    printf("\nGenero:");
    switch (p.genero){

        case t: printf("Terror");
        break;
        case m: printf("Musical");
        break;
        case a: printf("Accion");
        break;
        case i: printf("Infantil");
        break;
    }




}
