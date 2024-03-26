#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort function
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Binary Search function
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // return -1 if element is not found
}

int main() {
    // Before Array
    cout << "Before Array:" << endl;

    vector<int> arr = {5, 2, 9, 1, 5, 6, 8, 3};

    // Print the array before sorting
    cout << "Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    // Sort the array using Bubble Sort
    bubbleSort(arr);

    // After Array
    cout << "After Array:" << endl;

    // Print the array after sorting
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    int target = 6;
    int index = binarySearch(arr, target);
    if (index != -1)
        cout << "Element " << target << " found at index " << index << endl;
    else
        cout << "Element " << target << " not found in the array" << endl;
    
    return 0;
}
