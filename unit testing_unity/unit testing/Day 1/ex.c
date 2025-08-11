#include "demo.h"

int exclamation(int a) {
    int fact = 1;
    for(int i = 1; i <= a; i++) {
        fact *= i;
    }
    return fact;
}