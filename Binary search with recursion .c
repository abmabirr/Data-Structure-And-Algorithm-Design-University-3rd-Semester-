#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key) {
    if(low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if(arr[mid] == key)
    return mid;
    else if(arr[mid] < key)
    return binarySearch(arr, mid + 1, high, key);
    else
        return binarySearch(arr, low, mid - 1, key);
}

int main() {
    int arr[]={10, 20, 30, 40, 50};
    int key;

    printf("Enter the number to search: ");
    scanf("%d", &key);
    int result=binarySearch(arr, 0, 4, key); 
    if (result != -1){
    printf("Number found at position %d\n", result + 1);
    }else{
    printf("Number not found.\n");
    }

    return 0;
}