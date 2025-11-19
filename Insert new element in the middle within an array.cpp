#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter position to insert (1 to " << n-1 << "): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> value;

    for(int i = n; i > pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos] = value;
    n++;

    cout << "\nArray after inserting in the middle:\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}