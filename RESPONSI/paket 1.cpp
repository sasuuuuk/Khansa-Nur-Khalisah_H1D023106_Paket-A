#include <iostream>
using namespace std;

// Fungsi Linear Search
int linearSearch(int arr[], int n, int x) { 
    for(int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

// Fungsi Binary Search
int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n, m, x;
    cin >> n >> m;

    int array_A[n]; 
    int array_B[m];
    
    // Input Array A
    for (int i = 0; i < n; i++) {
        cin >> array_A[i];
    }
    
    // Input Array B
    for(int i = 0; i < m; i++) {
        cin >> array_B[i];
    }
  
    cin >> x;
  
    // Pencarian
    int index_A = linearSearch(array_A, n, x);
    int index_B = binarySearch(array_B, m, x);
  
    if (index_A != -1 && index_B != -1)
        cout << "KEDUANYA " << index_A << " " << index_B << endl;
    else {
        if (index_A != -1)
            cout << "Elemen " << x << " ditemukan di array A pada indeks " << index_A << endl;
        else
            cout << "Elemen " << x << " tidak ditemukan di array A" << endl;

        if (index_B != -1)
            cout << "Elemen " << x << " ditemukan di array B pada indeks " << index_B << endl;
        else
            cout << "Elemen " << x << " tidak ditemukan di array B" << endl;
    }

    return 0;
}


