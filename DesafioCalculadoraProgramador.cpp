#include <stdio.h>

void DecBinHex(int decimal) {
    if (decimal == 0) {
        printf("0");
        return;
    }

    int binario[32];
    int i = 0;
    int original = decimal;

    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("BIN: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
    printf("HEX: %X\n", original);
}

int main() {
    while (1) {
        int decisao;
        printf("\n\nCalculadora\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("0. Sair\n");
        printf("Escolha o modo (0-4): ");
        scanf("%d", &decisao);

        if (decisao == 0) {
            printf("\nSaindo da calculadora.\n");
            break;
        }

        float num1, num2;
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        float resultado;

        switch (decisao) {
            case 1:
                resultado = num1 + num2;
                printf("\nResultado: %0.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("\nResultado: %0.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("\nResultado: %0.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("\nResultado: %0.2f\n", resultado);
                } else {
                    printf("\nErro: Divisao por zero.\n");
                }
                break;
            default:
                printf("\nOpcao invalida.\n");
        }

        DecBinHex(resultado);
    }

    return 0;
}
