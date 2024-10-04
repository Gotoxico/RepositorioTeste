#include<stdio.h>
#include <stdlib.h>
#include <math.h>

double multiplicacao(double a, double b){
    double mult;
    mult = a * b;
    return mult;
}

double divisao(char* a, char* b){
    double aFloat = atof(a), bFloat = atof(b);
    if(b == 0){
        printf("Divisao por 0 impossivel\n");
        return;
    }
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
    double a, b;
    char n[20], m[20];



    

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