#include <stdio.h>
#include <stdlib.h>
void main() {
    char operacao;
    float num1, num2, resultado;

   
    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

   
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: divisao por zero!\n");
                return; 
            }
            break;
        
        default:
            printf("Operacao invalida!\n");
            return; 
    }

    // Exibir o resultado
    printf("Resultado: %.2f\n", resultado);
}
