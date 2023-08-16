#include <stdio.h>

int fib(int n) {
    if (n <= 0) {
        return 0; // Base case: Fib(0) = 0
    } else if (n == 1) {
        return 1; // Base case: Fib(1) = 1
    } else {
        return fib(n - 1) + fib(n - 2); // Recursive case
    }
}

int main() {
    int num = 5;
    int result = fib(num);

    printf("Fibonacci of %d is: %d\n", num, result);

    return 0;
}
