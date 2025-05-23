#include <stdio.h>
int main() {
    int cont_travafeo, cont_minatea, cont_completos, cont_total;
    char respuesta;

    cont_travafeo = 0;
    cont_minatea = 0;
    cont_completos = 0;
    cont_total = 0;

    printf("ENCUESTA: Que prefieres? \n");
    printf("A) Traba feo \n");
    printf("B) Mina TEA \n");
    printf("C) Salir solo a comer completos \n");
    printf("Presiona cualquier otra letra para terminar \n");
    scanf(" %c", &respuesta);

    while (respuesta == 'A' || respuesta == 'B' || respuesta == 'C' || respuesta == 'a' || respuesta == 'b' || respuesta == 'c') {
        if (respuesta == 'A' || respuesta == 'a') {
            cont_travafeo = cont_travafeo + 1;
            printf("Puta el weon vio \n");
            printf("Hasta ahora %d personas han elegido esta opcion\n", cont_travafeo);
        }
        if (respuesta == 'B' || respuesta == 'b') {
            cont_minatea = cont_minatea + 1;
            printf("VIVA EL METAL PESADO, LA CERVEZA FRIA Y LAS MINAS CON TEA \n");
            printf("Hasta ahora %d personas han elegido esta opcion\n", cont_minatea);
        }
        if (respuesta == 'C' || respuesta == 'c') {
            cont_completos = cont_completos + 1;
            printf("Aweonao mierda anda a matarte \n");
            printf("Hasta ahora %d personas han elegido esta opcion\n", cont_completos);
        }
        cont_total = cont_total + 1;
        scanf(" %c", &respuesta);
    }
    printf("Total de respuestas: %d\n", cont_total);
    printf("Personas que prefieren los travas feos: %d\n", cont_travafeo);
    printf("Personas que prefieren las minas TEA: %d\n", cont_minatea);
    printf("Personas que prefieren salir a comer completos solos (aweonaos): %d\n", cont_completos);
    printf("\n");
    printf("Presiona cualquier tecla para salir\n");
    scanf(" %c", &respuesta);

    return 0;

}
