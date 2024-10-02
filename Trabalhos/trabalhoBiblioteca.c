#include <stdio.h>
#include <float.h>

void flt_max_exp(){
    printf("\n");
    printf("The maximum value of 10-exponent for float: %d\n", FLT_MAX_EXP);
}
void flt_max_10_exp(){
    printf("\n");
    printf("The maximum value of 10-exponent for float: %d\n", FLT_MAX_10_EXP);
}

void flt_mant_dig(){
    
    printf("TESTE: %2f \n ",FLT_DIG);
}
void flt_epsilon(){
    float epsilon = FLT_EPSILON;
    printf("\n");
    printf("The smallest positive difference between 1 and the next representable number: %f\n", epsilon);
}
void flt_radix(){
    int radix = FLT_RADIX;
    printf("\n");
    printf("The base (radix) of the exponent representation: %d\n", radix);
}

void flt_round(){
    float a = 1.0;
    printf( "Initial FLT_ROUND: %f  %d\n",a, FLT_ROUNDS );
}

void maxFloat(){
    printf("The maximum value of float = %.10e\n", FLT_MAX);
    printf("The minimum value of float = %.10e\n", FLT_MIN);

    printf("The number of digits in the number = %.10d\n", FLT_MANT_DIG);
    printf("\n");
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
