#include <stdio.h>
#include "demo.h"

int main() {
    int a = 8, b = 5;
    
    printf("Sum of %d and %d = %d\n", a, b, sum(a, b));
    printf("Difference of %d and %d = %d\n", a, b, difference(a, b));
    printf("Product of %d and %d = %d\n", a, b, product(a, b));
    printf("Division of %d and %d = %f\n", a, b, division(a, b));

    printf("Square of %d = %d\n", a, square(a));
    printf("Factorial of %d = %d\n", b, exclamation(b));
    
    return 0;
}