#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    int arr[n];  

    
    cout << "Enter " << n << " integers:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    cout << "You entered: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}