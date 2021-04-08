//
//  main.c
//  My Calculator
//
//  Created by Ramon Orraca on 08/04/21.
//

#include <stdio.h>

#include "arithmetic.h"
#include "controler.h"

int main(int argc, const char * argv[]) {
    double vector1[] = {5,6,9,40,45,18};
    double vector2[] = {1,2,3,4,5,6};
    double result[6];
    void (*my_op[4])(double *, double *, size_t, double *);
    size_t n_elems;
    OPERATION option = 0;
    
    n_elems = sizeof(vector1)/sizeof(vector1[0]);
    my_op[0] = arithmetic_sum;
    my_op[1] = arithmetic_subtract;
    my_op[2] = arithmetic_mult;
    my_op[3] = arithmetic_divide;
//    save_data(my_op);
    
    puts("Select Operation");
    scanf("%uz", &option);

    my_op[option](vector1, vector2, n_elems, result);
    
    for(size_t idx = 0; idx<n_elems; idx++) printf("My vector sum: %lf\n", result[idx]);

    return 0;
}
