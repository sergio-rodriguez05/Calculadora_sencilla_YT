#include <stdio.h>
#include <math.h>



//CALCULADORA SENCILLA EN C CON DOS INPUTS: Suma, resta, multiplicacion,
//division, modulo y raiz cuadrada.

int main() {

float a = 0;
float b = 0;
float resultado = 0;
int operacion = 0;
int control = 1;

while (control != 0) {

    printf("Que operacion quieres hacer?\n1)Suma\n2)Resta\n3)Multiplicacion\n4)Division\n5)Modulo\n6)Raiz\nSelecciona una opcion: ");
    scanf("%d", &operacion);
    printf("\n");

    switch (operacion) {
        case 1:
            printf("Primer sumando: ");
            scanf("%f", &a);
            printf("\n");

            printf("Segundo sumando: ");
            scanf("%f", &b);
            printf("\n");

            resultado = a + b;
            printf("El resultado es: %f\n", resultado);
            break;

        case 2:
            printf("Primer valor: ");
            scanf("%f", &a);
            printf("\n");

            printf("Segundo valor: ");
            scanf("%f", &b);
            printf("\n");

            resultado = a - b;
            printf("El resultado es: %f\n", resultado);
            printf("\n");

            break;

        case 3:
            printf("Primer valor: ");
            scanf("%f", &a);
            printf("\n");

            printf("Segundo valor: ");
            scanf("%f", &b);
            printf("\n");

            resultado = a * b;
            printf("El resultado es: %f\n", resultado);

            break;

        case 4:
            printf("Primer valor: ");
            scanf("%f", &a);
            printf("\n");

            printf("Segundo valor: ");
            scanf("%f", &b);
            printf("\n");

            resultado = a / b;
            printf("El resultado es: %f\n", resultado);

            break;

        case 5:
            printf("Primer valor: ");
            scanf("%f", &a);
            printf("\n");

            printf("Segundo valor: ");
            scanf("%f", &b);
            printf("\n");

            resultado = (int) a % (int) b; //El modulo solo se puede calcular en C con numeros enteros, no decimales.
            printf("El resultado es: %f\n", resultado);

            break;
        case 6:
            printf("Numero para hacer la raiz: ");
            scanf("%f", &a);
            printf("\n");

            resultado = sqrt(a);
            printf("El resultado es: %f\n", resultado);
    }

    printf("Quieres realizar otra operacion?\n1)si\n0)no\n");
    scanf("%d", &control);
    printf("\n");
}

}
