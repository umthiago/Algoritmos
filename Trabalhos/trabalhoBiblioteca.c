#include <stdio.h>
#include <float.h>


//Mostra o Valor Maxímo e mínimo de um float
void MaxMinFloat(){
    printf("VALORES MAX E MIN\n");
    printf("O máximo valor de um número em ponto flutuante é:  = %.10e\n", FLT_MAX);
    printf("O minimo valor de um número em ponto flutuante é:  %.10e\n", FLT_MIN);
    printf("\n");
    
}
//Mostra o valor da mantissa ou seja quantidade de digitos após a virgula
void floatMant(){
    printf("VALOR MANT\n");
    printf("Número de digitos do float (Valor Mantissa) = %d\n", FLT_MANT_DIG);
    printf("Número de digitos do Double (Valor Mantissa) = %d\n", DBL_MANT_DIG);
    printf("Número de digitos do Long Double (Valor Mantissa) = %d\n", LDBL_MANT_DIG);
}

//Informa o modo de arredondamento para todos os valores do tipo float, double e long double. Pode ser alterado com as funções presentes na biblioteca <fenv.h>. Cada valor, representa um modo, sendo eles://
/*-1: indeterminado
    0: em direção a zero
    1: para o valor mais próximo
    2: em direção ao infinito positivo
    3: em direção ao infinito negativo */
void flt_round(){
    int a = FLT_ROUNDS;
    printf("MODO DE ARREDONDAMENTO PARA VALORES FLOAT: %d\n", a);
}


void flt_radix(){
    int radix = FLT_RADIX;
    printf("\n");
    printf("The base (radix) of the exponent representation: %d\n", radix);
    //Informa a base do expoente, sendo 2 (binário), 10 (decimal) ou 16 (hexadecimal).//
}

void flt_epsilon(){
    float epsilon = FLT_EPSILON;
    printf("\n");
    printf("The smallest positive difference between 1 and the next representable number: %f\n", epsilon);
    //Informam o dígito menos significativo representável.//
}

void flt_mant_dig(){
    
    printf("TESTE: %d \n ",FLT_DIG);
    //Informam o número de dígitos do número na base FLT_RADIX.//
}

void flt_max_10_exp(){
    printf("\n");
    printf("The maximum value of 10-exponent for float: %d\n", FLT_MAX_10_EXP);
    //Informam o maior valor inteiro para um expoente na base decimal.//
}

void flt_max_exp(){
    printf("\n");
    printf("The maximum value of 10-exponent for float: %d\n", FLT_MAX_EXP);
    //"Informam o maior valor inteiro para um expoente na base FLT_RADIX."//
}



int main () {
    
    MaxMinFloat();
    floatMant();
    flt_round();
    flt_radix();
    flt_epsilon();
    flt_mant_dig();
    flt_max_10_exp();
    flt_max_exp();

   
}
