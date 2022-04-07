#include <stdio.h>

int main(void)
{
    float peso, altura, IMC;
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    IMC = peso / pow(altura,2);
    printf("O seu peso vale %.2f\n", peso);
    printf("A altura vale %.2f\n", altura);
    printf("O IMC vale %.2f\n", IMC);

    if (IMC < 18.5) {
        printf("Abaixo do peso.");
    } 
    else if ((IMC >= 18.5) && (IMC < 24.9)) {
        printf("Normal.");
    }
    else if ((IMC >= 25.0) && (IMC < 29.9)) {
        printf("Sobrepeso.");
    }
    else if ((IMC >= 30.0) && (IMC < 34.9)) {
        printf("Obesidade I grau.");
    }
    else if ((IMC >= 35.0) && (IMC < 39.9)) {
        printf("Obesidade II grau.");
    }
    else {
        printf("Obesidade grau 3 ou Morbida.");
    }
    return 0;
}


//peso/altura^2