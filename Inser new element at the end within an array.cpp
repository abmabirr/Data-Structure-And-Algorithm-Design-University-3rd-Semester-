#include <iostream>
using namespace std;

int main() {
    int arr[100], n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter value to insert at end: ";
    cin >> value;

    arr[n] = value;
    n++;

    cout << "\nArray after inserting at end:\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}