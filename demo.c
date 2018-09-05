#include <stdio.h>  // printf
#include "addition_daxpy.h"

int main()
{
    size_t n = 5;
    double y[n];
    double x[] = {1, 2, 3, 4, 5};
    double r[] = {.1, -.2, .05, -.02, .01};
    double alp = 0.5;

    // y=x+a*r
    addition_daxpy(x, r, alp, y, n); 

    for(size_t i=0; i<n; i++){
        printf("%8.4f\n", y[i]);
    }

	return 0;
}
