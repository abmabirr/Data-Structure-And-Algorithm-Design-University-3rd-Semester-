#include <iostream>
using namespace std;

int main() {
    int arr[100], uniqueArr[100];
    int n, uniqueCount = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == uniqueArr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            uniqueArr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }
    cout << "\nArray with unique elements:\n";
    for (int i = 0; i < uniqueCount; i++) {
        cout << uniqueArr[i] << " ";
    }

    return 0;
}