#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int add(int a, int b) {
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
int multiply(int a, int b) {
    return a * b;
}

EMSCRIPTEN_KEEPALIVE
int divide(int a, int b) {
    if (b == 0) {
        return 0; // Handle division by zero
    }
    return a / b;
}