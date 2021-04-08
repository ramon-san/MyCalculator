//
//  arithmetic.c
//  My Calculator
//
//  Created by Ramon Orraca on 08/04/21.
//

#include "arithmetic.h"

void arithmetic_sum(double *my_vector1, double *my_vector2, size_t n_elems, double *result){
    
    for(size_t idx = 0; idx<n_elems; idx++) result[idx] = my_vector1[idx] + my_vector2[idx];
    
    return;
}

void arithmetic_subtract(double *my_vector1, double *my_vector2, size_t n_elems, double *result){
    
    for(size_t idx = 0; idx<n_elems; idx++) result[idx] = my_vector1[idx] - my_vector2[idx];
    
    return;
}

void arithmetic_mult(double *my_vector1, double *my_vector2, size_t n_elems, double *result){
    
    for(size_t idx = 0; idx<n_elems; idx++) result[idx] = my_vector1[idx] * my_vector2[idx];
    
    return;
}

void arithmetic_divide(double *my_vector1, double *my_vector2, size_t n_elems, double *result){
    
    for(size_t idx = 0; idx<n_elems; idx++) result[idx] = my_vector1[idx] / my_vector2[idx];
    
    return;
}
