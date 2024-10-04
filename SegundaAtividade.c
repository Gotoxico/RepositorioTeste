#include<stdio.h>
#include <stdlib.h>

double multiplicacao(double a, double b){
    double mult;
    mult = a * b;
    return mult;
}

double divisao(char* a, char* b){
    double aFloat = atof(a), bFloat = atof(b);
    return aFloat/bFloat;
}

int adicao(double a, double b){
    double soma;
    soma = a + b;
    return soma;
}

double subtracao(double a, double b){
    double sub;
    sub = a - b;
    return sub;
}

double potenciacao(double a, double b){
    double potencia;
    potencia = pow(a, b);
    return ;
}

double raiz_quadrada(int a){
    double raiz;
    raiz = sqrt(a);
    return raiz;
}



int main(){

    char n[20], m[20];
    double n1, n2;
    int op;

    while(op != 0){
        printf("\n##### MENU #####\n0 - Sair\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Potenciacao\n6 - Raiz quadrada\n");
        printf("\nDigite sua opcao: ");
        scanf("%d", &op);

        switch(op){
            case 0:
                break;
            case 1:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);
                printf("\nDigite um outro numero: ");
                scanf("%lf", &n2);
                printf("\n%.2f + %.2f = %.2f", n1, n2, adicao(n1, n2));
                break;
            case 2:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);
                printf("\nDigite um outro numero: ");
                scanf("%lf", &n2);
                printf("\n%.2f - %.2f = %.2f", n1, n2, subtracao(n1, n2));
                break;
            case 3:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);
                printf("\nDigite outro numero: ");
                scanf("%lf", &n2);
                printf("\n%.2f x %.2f = %.2f\n", n1, n2, multiplicacao(n1, n2));
            case 4:
                printf("\nDigite um numero: ");
                scanf("%s", n);
                getchar();
                printf("\nDigite outro numero: ");
                scanf("%s", m);
                printf("\n%s / %s = %.2f", n, m, divisao(n, m));
            case 5:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);
                printf("\nDigite um outro numero: ");
                scanf("%lf", &n2);
                printf("\n%.2f ˆ %.2f = %.2f", n1, n2, potenciacao(n1, n2));
                break;
            case 6:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);
                printf("\n √%.2f = %.2f", n1, raiz_quadrada(n1));
                break;
            default:
                printf("\nOperacao invalida!\n");
                break;
        }
    }





    /*printf("\nMULTIPLICACAO: ");
    printf("\nDigite um numero: ");
    scanf("%lf", &a);
    printf("\nDigite outro numero: ");
    scanf("%lf", &b);
    printf("\n%.2f x %.2f = %.2f\n", a, b, multiplicacao(a, b));


    printf("\nDIVISAO: ");
    printf("\nDigite um numero: ");
    scanf("%s", n);
    getchar();
    printf("\nDigite outro numero: ");
    scanf("%s", m);
    printf("\n%s / %s = %.2f", n, m, divisao(n, m));*/


    return 0;
}