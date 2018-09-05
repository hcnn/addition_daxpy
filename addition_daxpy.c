#include "addition_daxpy.h"

// z = x + a * y
void addition_daxpy(const double* x, const double* y, double a, double* z, size_t n){
    size_t i;
    for(i=0; i<n; i++){
        z[i] = x[i] + a * y[i];
    }
}

