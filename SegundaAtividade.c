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


int main(){
    double a, b;
    char n, m;

    printf("\nMULTIPLICACAO: ");
    printf("\nDigite um numero: ");
    scanf("%lf", &a);
    printf("\nDigite outro numero: ");
    scanf("%lf", &b);
    printf("\n%.2f x %.2f = %.2f", a, b, multiplicacao(a, b));

/*
    printf("\nDIVISAO: ");
    printf("\nDigite um numero: ");
    scanf("%c");
    printf("\nDigite outro numero: ");
    scanf("%lf");
    printf("\n%.2f / %.2f = %.2f ");
*/


    return 0;
}