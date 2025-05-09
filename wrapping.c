#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int calculate(int a, int b) {
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
int subtract(int a, int b) {
    return a - b;
}

EMSCRIPTEN_KEEPALIVE
int main() {
    printf("Hello, and welcome to the WASM calculator!\n");
    return 0;
}