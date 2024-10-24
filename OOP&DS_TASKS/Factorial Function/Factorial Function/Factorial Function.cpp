#include <iostream>
using namespace std;


int factorial(int n) {
    if (n <= 1) {
        return 1 ;
    }
    int* p = &n;
    return (*p) * factorial(n - 1);
}

int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    int* pBase = &base;
    return (*pBase) * power(base, exp - 1);
}

int main() {
    int number;
    cout << "Enter a number for factorial: ";
    cin >> number;
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;  
    cout << "the power of " << number << " is: " << power(number, number) << endl;

    return 0;
}
