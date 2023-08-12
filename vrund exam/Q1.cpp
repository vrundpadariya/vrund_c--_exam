//Write a C++ program to print factorial series using recursion.

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void printFactorialSeries(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << "Factorial of " << i << " is: " << factorial(i) << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        printFactorialSeries(n);
    }

    return 0;
}

