#include "demo.h"

float division(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    }
    return 0; // handle divide-by-zero
}
