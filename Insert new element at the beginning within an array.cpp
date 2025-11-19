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

    cout << "Enter value to insert at beginning: ";
    cin >> value;

    for(int i = n; i > 0; i--){
        arr[i] = arr[i-1];
    }

    arr[0] = value;
    n++;

    cout << "\nArray after inserting at beginning:\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}