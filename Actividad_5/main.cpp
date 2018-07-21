#include <cstdio>
#include <stdlib.h>

using namespace std;

    struct fecha{
        int dia;
        int mes;
        int anho;
    };

    struct artista{
        char nombre[15];
        char apellidos[20];
        fecha fechanac;
    };

    struct pelicula{
        int codigo;
        char titulo[20];
        enum genero { terror, musical, accion, infantil };
        artista artistappal;
    };

    struct medicamento{
        char nombre[15];

        int codigo;
        char descrpcion[60];
        char laboratorio[10];
        char proveedor[10];
        int precio;
        fecha fechacad;
    };

    struct direccion{
        char calle[20];
        int numero;
        char provincia[10];
        int cp;
    };

    struct directivo{
        int productividad;
        int categoria;
    };

    struct base {
        int cd;
    };

    union variable{
        directivo esdirectivo;
        base noesdirectivo;
    };

    struct empleado{
        char nombre[15];
        char apellidos[20];
        int segsoc;
        int salario;
        direccion dire;
        variable puesto;
    };

    enum sexo { M, F };
    struct cliente{
        char nombre[30];
        int edad;
        sexo seso;
    };

    struct complejo{
    int pReal;
    int pImg;
};

//1
    void rellenapelicula(pelicula &p);
    void mostrarpelicula(pelicula p);

//2
    void rellenamedic(medicamento &m);
    void muestramedic(medicamento m);

//4
    void muestraCliente(const cliente &c);
    void rellenaCliente(cliente &c);

void operaComplejos(complejo c1, complejo c2, char c);


int main()
{

    complejo c1;
    complejo c2;
    c1.pReal = 5;
    c1.pImg = 3;
    c2.pReal = 3;
    c2.pImg = 2;

    operaComplejos(c1, c2 , '+');
    operaComplejos(c1, c2 , '-');
    operaComplejos(c1, c2 , '*');
}

void rellenapelicula(pelicula &p){
    int aux;
    printf("Inserte dia nacimiento: ");
    scanf("%d", &p.artistappal.fechanac.dia);
    printf("Inserte mes nacimiento: ");
    scanf("%d", &p.artistappal.fechanac.mes);
    printf("Inserte año nacimiento: ");
    scanf("%d", &p.artistappal.fechanac.anho);
    printf("Nombre: ");
    scanf("%s", &p.artistappal.nombre);
    printf("Apellidos: ");
    scanf("%s", &p.artistappal.apellidos);
    printf("Codigo: ");
    scanf("%d", &p.codigo);
    printf("Título: ");
    scanf("%s", &p.titulo);
}

void mostrarpelicula(pelicula p){
    printf("\nTitulo: %s", p.titulo);
    printf("\nCodigo: %d", p.codigo);
    printf("\nNombre Artista: %s", p.artistappal.nombre);
    printf("\nApellidos: %s", p.artistappal.apellidos);
    printf("\nFecha Nacimiento: %d/%d/%d", p.artistappal.fechanac.dia, p.artistappal.fechanac.mes, p.artistappal.fechanac.anho);
}

void rellenamedic(medicamento &m){
    printf("Nombre: ");
    scanf("%s", &m.nombre);
    printf("Codigo: ");
    scanf("%d", &m.codigo);
    printf("Descripcion: ");
    scanf("%s", &m.descrpcion);
    printf("Laboratorio: ");
    scanf("%s", &m.laboratorio);
    printf("Proveedor: ");
    scanf("%s", &m.proveedor);
    printf("Precio: ");
    scanf("%d", &m.precio);
    printf("Caducidad");
    scanf("%d%d%d", &m.fechacad.dia, &m.fechacad.mes, &m.fechacad.anho);
}

 void muestramedic(medicamento m){
    printf("\nNombre: %s", m.nombre);
    printf("\nCodigo: %d", m.codigo);
    printf("\nDescripcion: %s", m.descrpcion);
    printf("\nLaboratorio: %s", m.laboratorio);
    printf("\nProveedor: %s", m.proveedor);
    printf("\nPrecio: %d", m.precio);
    printf("\nCaducidad: %d/%d/%d", m.fechacad.dia, m.fechacad.mes, m.fechacad.anho);
}

void rellenaCliente(cliente &c){
    char aux;
    printf("Nombre: ");
    scanf("%s", &c.nombre);
    printf("Edad: ");
    scanf("%d", &c.edad);
    printf("Sexo: ");
    scanf("%s", &aux );
    switch(aux){
        case 'M': c.seso = M; break;
        case 'F': c.seso = F; break;
    }
}

void muestraCliente(const cliente &c){
    printf("\nDatos del cliente:");
    printf("\nNombre: %s", c.nombre);
    printf("\nEdad: %d", c.edad);
    printf("\nSexo: ");
    switch(c.seso){
        case M: printf("Hombre");
        break;
        case F: printf("Mujer");
        break;
    }
}

void operaComplejos(complejo c1, complejo c2, char c){

    switch (c){
        case '+': printf("\nLa suma es: %d+%di", c1.pReal+c2.pReal, c1.pImg+c2.pImg); break;
        case '-': printf("\nLa resta es: %d+%di", c1.pReal-c2.pReal, c1.pImg-c2.pImg); break;
        case '*': printf("\nLa multiplicacion es: %d+%di", (((c1.pReal*c2.pReal)-(c1.pImg+c2.pImg))+((c1.pReal*c2.pImg)+(c1.pImg*c2.pReal)))); break;
    }

}
