#include <iostream>
using namespace std;

int* fibonacci(int n) {
    int* fib = new int[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 2] + fib[i - 1];
    }
    return fib;
}

int main() {
    int n = 8;
    int* fib = fibonacci(n);
    cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    }
    delete[] fib; // Free memory
    cout << endl;
    return 0;
}
