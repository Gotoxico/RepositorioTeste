#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
float soma(char* valor1, char* valor2){
    float value1 = atof(valor1), value2 = atof(valor2);
    return value1 + value2;
}

float subtracao(char* valor1, char* valor2){
    float value1 = atof(valor1), value2 = atof(valor2);
    return value1 - value2;
}

float potenciacao(char* base, char* expoente){
    float baseFloat = atof(base), expoenteFloat = atof(expoente);
    return pow(baseFloat, expoenteFloat);
}

float radiciacao(char* base, char* expoente){
    float baseFloat = atof(base), expoenteFloat = atof(expoente); 
    return pow(baseFloat, 1/expoenteFloat);   
}

int main(){
    int opcao = 0;
    char valor1[20], valor2[20];
        do {
        printf("\nMenu:\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Potenciacao\n");
        printf("4. Radiciacao\n");
        printf("5. Sair\n");
        printf("Digite opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro valor: ");
            scanf("%s", valor1);
            printf("Digite o segundo valor: ");
            scanf("%s", valor2);
        }

        switch(opcao) {
            case 1:
                printf("Resultado da soma: %.2f\n", soma(valor1, valor2));
                break;
            case 2:
                printf("Resultado da subtracao: %.2f\n", subtracao(valor1, valor2));
                break;
            case 3:
                printf("Resultado da potenciacao: %.2f\n", potenciacao(valor1, valor2));
                break;
            case 4:
                printf("Resultado da radiciacao: %.2f\n", radiciacao(valor1, valor2));
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while(opcao != 5);
}