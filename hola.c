#include <stdio.h>

float calcularSuma(float, float);
float calcularResta(float, float);
float calcularMultiplicacion(float, float);
float calcularDivision(float, float);

float menu(){
    int operacion;
    float num1, num2, res;
    printf("Que desea realizar\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n");
    scanf("%d", &operacion);
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    switch (operacion) {
        case 1:
            res = calcularSuma(num1, num2);
            break;
        case 2:
            res = calcularResta(num1, num2);
            break;
        case 3:
            res = calcularMultiplicacion(num1, num2);
            break;
        case 4:
            res = calcularDivision(num1, num2);
            break;
        default:
            printf("Opcion invalida\n");
            break;
    }
    return res;
}

float calcularSuma(float num1, float num2){
    return num1 + num2;
}

float calcularResta(float num1, float num2){
    return num1 - num2;
}

float calcularMultiplicacion(float num1, float num2){
    return num1 * num2;
}

float calcularDivision(float num1, float num2){
    if (num2 == 0) {
        printf("Error: No se puede dividir por cero.\n");
        return 0.0;
    }
    return num1 / num2;
}

int main(){
    int continuar;
    do{
        float res = menu();
        printf("El resultado de la operacion es: %f\n", res);
        printf("¿Desea continuar?\n 1.Si\nNo(ingrese cualquier tecla)\n");
        scanf("%d", &continuar);
    } while (continuar == 1);
    return 0;
}
