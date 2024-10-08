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
//Informa a base do expoente, sendo 2 (binário), 10 (decimal) ou 16 (hexadecimal).//
void flt_radix(){
    int radix = FLT_RADIX;
    printf("BASE DE REPRESENTAÇÃO %d\n", radix);
    printf("\n");
}
//Informam o dígito menos significativo representável.
//(precisão relativa da unidade):
void flt_epsilon(){
    printf("A menor diferença positiva entre 1 e próximo número representável é: \n",FLT_EPSILON);
    printf("\n");
}
//Número de dígitos decimais de precisão para
void flt_dig(){
    printf("Precisão do float: %d dígitos\n ",FLT_DIG);
    printf("Precisão do Double: %d dígitos\n ",DBL_DIG);
    printf("Precisão do Long Double: %d dígitos\n ",LDBL_DIG);
    printf("\n");
}

//Informam o maior valor inteiro para um expoente na base decimal.//
void flt_max_10_exp(){
    
    printf("O maximo valor de expoente na base 10 para representação em float é: %d\n", FLT_MAX_10_EXP);
    printf("O maximo valor de expoente na base 10 para representação em double é: %d\n", DBL_MAX_10_EXP);
    printf("\n");
    
}

 //"Informam o maior valor inteiro de um expoente para um float ."//
void flt_max_exp(){
    printf("O maximo valor inteiro para um expoente de um float é: %d\n", FLT_MAX_EXP);
    printf("O maximo valor inteiro para um expoente de um Double é: %d\n", DBL_MAX_EXP);
    printf("\n");
}

int main () {
    //Chamando as funções
    MaxMinFloat();
    floatMant();
    flt_round();
    flt_radix();
    flt_epsilon();
    flt_dig();
    flt_max_10_exp();
    flt_max_exp();
}
