#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        a = a % b;
    }
    return a;
}

int main() {
    cout << "GCD is: " << gcd(56, 98) << endl;
    return 0;
}
