#include "demo.h"

int modulo(int a, int b) {
    if (b != 0) {
        return a % b;
    }
    return 0; // avoid modulo by zero
}
