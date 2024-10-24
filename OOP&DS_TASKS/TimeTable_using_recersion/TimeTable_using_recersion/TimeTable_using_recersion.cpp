#include <iostream>
using namespace std;

void printMultiplicationTable(int n) {
    if (n > 12) {
        return; 
    }
    cout << "5 * " << n << " = " << 5 * n << endl;
    printMultiplicationTable(n + 1); 
}

int main() {
    printMultiplicationTable(1); 
    return 0;
}
