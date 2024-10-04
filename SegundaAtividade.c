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



    return 0;
}