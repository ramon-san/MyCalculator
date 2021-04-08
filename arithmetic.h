//
//  arithmetic.h
//  My Calculator
//
//  Created by Ramon Orraca on 08/04/21.
//

#ifndef arithmetic_h
#define arithmetic_h

#include <stdio.h>
#include <stdlib.h>

typedef enum{
    IDLE,
    SUM,
    SUB,
    MULT,
    DIV
}OPERATION;

void arithmetic_sum(double *my_vector1, double *my_vector2, size_t n_elems, double *result);

void arithmetic_subtract(double *my_vector1, double *my_vector2, size_t n_elems, double *result);

void arithmetic_mult(double *my_vector1, double *my_vector2, size_t n_elems, double *result);

void arithmetic_divide(double *my_vector1, double *my_vector2, size_t n_elems, double *result);

#endif /* arithmetic_h */
