#include <stdio.h>
#include <float.h>

void flt_max_exp(){
    printf("\n");
    printf("The maximum value of 10-exponent for float: %d\n", FLT_MAX_EXP);
    //"Informam o maior valor inteiro para um expoente na base FLT_RADIX."//
}
void flt_max_10_exp(){
    printf("\n");
    printf("The maximum value of 10-exponent for float: %d\n", FLT_MAX_10_EXP);
    //Informam o maior valor inteiro para um expoente na base decimal.//
}

void flt_mant_dig(){
    
    printf("TESTE: %2f \n ",FLT_DIG);
    //Informam o número de dígitos do número na base FLT_RADIX.//
}
void flt_epsilon(){
    float epsilon = FLT_EPSILON;
    printf("\n");
    printf("The smallest positive difference between 1 and the next representable number: %f\n", epsilon);
    //Informam o dígito menos significativo representável.//
}

void flt_radix(){
    int radix = FLT_RADIX;
    printf("\n");
    printf("The base (radix) of the exponent representation: %d\n", radix);
    //Informa a base do expoente, sendo 2 (binário), 10 (decimal) ou 16 (hexadecimal).//
}

void flt_round(){
    float a = 1.0;
    printf( "Initial FLT_ROUND: %f  %d\n",a, FLT_ROUNDS );
    //Informa o modo de arredondamento para todos os valores do tipo float, double e long double. Pode ser alterado com as funções presentes na biblioteca <fenv.h>. Cada valor, representa um modo, sendo eles://
    //-1: indeterminado
//0: em direção a zero
//1: para o valor mais próximo
//2: em direção ao infinito positivo
//3: em direção ao infinito negativo//
    
}

void maxFloat(){
    printf("The maximum value of float = %.10e\n", FLT_MAX);
    printf("The minimum value of float = %.10e\n", FLT_MIN);

    printf("The number of digits in the number = %.10d\n", FLT_MANT_DIG);
    printf("\n");
    //Informam o maior valor finito de um ponto flutuante.//
}

int main () {
    
    maxFloat();
    flt_round();
    flt_radix();
    flt_epsilon();
    flt_mant_dig();
    flt_max_10_exp();
    flt_max_exp();

   
}
