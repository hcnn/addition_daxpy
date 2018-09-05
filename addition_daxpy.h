#ifndef ADDITION_DAXPY_H
#define ADDITION_DAXPY_H

#include <stddef.h>

// z = x + a * y
void addition_daxpy(const double* x, const double* y, double a, double* z, size_t n);

#endif /* ADDITION_DAXPY_H */
