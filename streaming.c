#include <emscripten.h>

int add(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

EMSCRIPTEN_KEEPALIVE
int sumOfNInts(int n) {
    return divide(multiply(n, add(n, 1)), 2);
}