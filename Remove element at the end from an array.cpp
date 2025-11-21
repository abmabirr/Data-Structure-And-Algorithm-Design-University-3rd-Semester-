#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    n--;

    cout << "Array after removing from end:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}