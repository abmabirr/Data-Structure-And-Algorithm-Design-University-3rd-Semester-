#include <iostream>
using namespace std;

int power(int x, int n) {
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1); 
}

int main() {
    int x, n;

   
    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter exponent (n): ";
    cin >> n;

    cout << x << "^" << n << " = " << power(x, n) << endl;

    return 0;
}