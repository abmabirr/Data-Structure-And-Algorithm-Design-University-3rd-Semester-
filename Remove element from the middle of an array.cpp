#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) 
			 cin >> arr[i];

    cout << "Enter the position to remove: ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position!";
        return 0;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Array after removing from middle:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}