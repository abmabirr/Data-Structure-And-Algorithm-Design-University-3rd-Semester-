    #include<iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub) {
    int n = ub - lb + 1;
    int *b = new int[n];   

    int i = lb; 
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= ub) {
        if (arr[i] <= arr[j]) {
            b[k] = arr[i];
            i++;
        } else {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

   
    while (i <= mid) {
        b[k] = arr[i];
        i++;
        k++;
    }

   
    while (j <= ub) {
        b[k] = arr[j];
        j++;
        k++;
    }

  
    for (int x = 0; x < n; x++) {
        arr[lb + x] = b[x];
    }

   
}

void mergeSort(int arr[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;

        mergeSort(arr, lb, mid);      
        mergeSort(arr, mid + 1, ub); 

        merge(arr, lb, mid, ub);  
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

    
