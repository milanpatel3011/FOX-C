#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>
// #include "io_utils.h"  // Include Fox-C I/O utilities if you need to use runxt

namespace foxc {

    // Merges two sorted subarrays into a single sorted array
    void merge(std::vector<int>& arr, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        // Create temp arrays
        std::vector<int> L(n1), R(n2);
        for (int i = 0; i < n1; i++) L[i] = arr[left + i];
        for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

        int i = 0, j = 0, k = left;

        // Merge two halves
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) arr[k++] = L[i++];
            else arr[k++] = R[j++];
        }

        // Copy remaining elements
        while (i < n1) arr[k++] = L[i++];
        while (j < n2) arr[k++] = R[j++];
    }

    // Merge Sort function
    void mergeSort(std::vector<int>& arr, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }

    // Function to print the array (for visualization of sorting)
    void printArray(const std::vector<int>& arr) {
        for (const auto& num : arr) run(num, " ");
        runxt(); // Print newline
    }

} // namespace foxc

#endif // MERGE_SORT_H
