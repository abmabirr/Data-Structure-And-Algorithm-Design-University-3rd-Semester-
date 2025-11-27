#include <iostream>
using namespace std;

int binarySearch(int n, int arr[],int key){
    int left = 0;
    int right = n-1;
    while(left <= right){
        int mid = (left + right)/2;
        if(arr[mid] == key){
            return mid;
        }else if(mid > key){
            left = mid + 1;
        }else{
            right = mid - 1;

        }

        }
        return -1;


    }
    

int main(){
    int n, key;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Enter tha value to search: ";
    cin >> key;
    int result = binarySearch(n,arr,key);
    if (result != -1){
        cout << "Element found at index: " << result;
    } else {
        cout << "Element not found in the array.";
    }
    
}

