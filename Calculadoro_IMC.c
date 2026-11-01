#include <stdio.h>

int main(void) {
    double peso, altura, imc;

    printf("===== CALCULADORA DE IMC =====\n");

    printf("Digite seu peso em kg: ");
    if (scanf("%lf", &peso) != 1) {
        printf("Peso invalido!\n");
        return 1;
    }

    printf("Digite sua altura em metros: ");
    if (scanf("%lf", &altura) != 1) {
        printf("Altura invalida!\n");
        return 1;
    }

    if (peso <= 0 || altura <= 0) {
        printf("Peso e altura devem ser positivos!\n");
        return 1;
    }

    imc = peso / (altura * altura);

    printf("\nSeu IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    }
    else if (imc < 25) {
        printf("Classificacao: Peso adequado\n");
    }
    else if (imc < 30) {
        printf("Classificacao: Sobrepeso\n");
    }
    else if (imc < 35) {
        printf("Classificacao: Obesidade grau I\n");
    }
    else if (imc < 40) {
        printf("Classificacao: Obesidade grau II\n");
    }
    else {
        printf("Classificacao: Obesidade grau III\n");
    }

    return 0;
}
