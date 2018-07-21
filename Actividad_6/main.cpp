#include <cstdio>

using namespace std;

/// 3. Definir la estructura registro necesaria para almacenar los siguientes datos de
/// cada uno de los empleados de una empresa: nombre, apellidos, número de la
/// seguridad social, salario, dirección (calle, número, provincia y código postal).
/// Para los empleados con cargo directivo se almacenará la categoría,
/// productividad, y para el resto de empleados, su complemento de destino y turno
/// de trabajo (mañana, tarde, noche).

enum tipoEmpleado{ dire, noDire };
enum turno{ manhana, tarde, noche };


struct direccion{
    char calle[10];
    int num;
    char provincia[10];
    int cp;
};


struct directivo{
    float productividad;
};

struct normal{
    int CD;
};

union adicionales{
    directivo dire;
    normal noDire ;

};

struct empleado{
    char nombre[10];
    char apellidos[20];
    int nss;
    float salario;
    direccion dire;
    tipoEmpleado edc;
    adicionales te;
};



void rellenar(empleado &e);

int main()
{
    empleado e;
    rellenar(e);

}

void rellenar(empleado &e){
    char car;

    printf("nombre: ");
    gets(e.nombre);
    printf("ape: ");
    scanf("%s",e.apellidos);
    printf("Direccion: ");
    printf("\nCalle:");
    scanf("%s",e.dire.calle);
    printf("Numero: ");
    scanf("%d", &e.dire.num);
    printf("\nProvincia:");
    scanf("%s",e.dire.provincia);
    printf("CP: ");
    scanf("%d", &e.dire.cp);
    printf("Numero seg social: ");
    scanf("%d", &e.nss);
    printf("Salario: ");
    scanf("%f", &e.salario);
    printf("Directivo(d) o no(n): ");
        fflush(stdin);
        scanf("%c", &car);
        switch(car){
            case 'd': e.edc = dire;
                printf("product");
                scanf("%f", &e.te.dire.productividad);
            break;
            case 'n': e.edc = noDire;
                printf("%d", &e.te.noDire.CD);
            break;
    }
}
