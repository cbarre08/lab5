#include <iostream>
#include <vector>
#include <utility>
#include "myheaders.h"

// Rearranges elements around the pivot and returns its final index
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1;       // Index of the smaller element boundary

    for (int j = low; j < high; j++) {
        // Move elements smaller than the pivot to the left side
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    // Place the pivot in its correct sorted position
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Recursively sorts subarrays before and after the partition
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Sort left subarray
        quickSort(arr, pi + 1, high); // Sort right subarray
    }
}

int main() {
    std::vector<int> data = {10, 7, 8, 9, 1, 5};

    quickSort(data, 0, data.size() - 1);

    std::cout << "Sorted array: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    return 0;

}
