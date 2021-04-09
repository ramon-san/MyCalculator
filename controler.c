//
//  controler.c
//  My Calculator
//
//  Created by Ramon Orraca on 08/04/21.
//

#include "controler.h"

void save_data(void (*my_op[4])(double *, double *, size_t, double *)){

    my_op[0] = arithmetic_sum;
    my_op[1] = arithmetic_subtract;
    my_op[2] = arithmetic_mult;
    my_op[3] = arithmetic_divide;

    return;
}
