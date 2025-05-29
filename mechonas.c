#include <stdio.h>
#include <unistd.h>
int main () {
    int seleccion, salir, domicilio3;
    char domicilio[20], domicilio2[20];

    printf("----- MECHONAS CON TULA AL DM -----\n");
    printf("\n");
    printf("Presione 1 para mechona con tula chica\n");
    printf("Presione 2 para mechona con tula grande\n");
    printf("Presione 3 para mechona sin tula\n");
    scanf(" %d", &seleccion);

    printf("Especifique su domicilio\n");
    printf("\n");
    printf("CIUDAD:\n");
    scanf(" %s", &domicilio);
    printf("\n");
    printf("CALLE:\n");
    scanf(" %s", &domicilio2);
    printf("\n");
    printf("NUMERO:\n");
    scanf(" %d", &domicilio3);

    printf("Contactando con el servidor de mechonas con tula...\n");
    sleep(5);
    printf("\n");

    if(seleccion == 1) {
        printf("----- Resumen del pedido -----\n");
        printf("\n");
        printf("x1 Mechona con tula chica\n");
        printf("Destino: %s %s %d\n", domicilio, domicilio2, domicilio3);
    } else if (seleccion == 2) {
        printf("----- Resumen del pedido -----\n");
        printf("\n");
        printf("x1 Mechona con tula grande\n");
        printf("Destino: %s %s %d\n", domicilio, domicilio2, domicilio3);
    } else if(seleccion == 3) {
        printf("----- Resumen del pedido -----\n");
        printf("\n");
        printf("buuuuuu aweonao mierda anda a matarte\n");
        printf("Se ha enviado una bomba a la siguiente direccion: %s %s %d\n", domicilio, domicilio2, domicilio3);
    }
    printf("\n");
    printf("Ingrese cualquier caracter para salir\n");
    scanf("%d", &salir);
    printf("\n");

    return 0;

}