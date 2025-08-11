#include "demo.h"

int sum(int a, int b) {
    return a + b;
}

int difference(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    if (b != 0)
        return (float)a / b;
    return 0; // return 0 if division by zero
}

int modulo(int a, int b) {
    if (b != 0)
        return a % b;
    return 0; // return 0 if modulo by zero
}

int square(int a) {
    return a * a;
}

long long exclamation(int a) {
    long long fact = 1;
    for (int i = 1; i <= a; i++) {
        fact *= i;
    }
    return fact;
}
