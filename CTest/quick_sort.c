#include "quick_sort.h"


void quick_sort(int* array, int size){
    quick_sort_algorithm(array, 0, size - 1);
}

void quick_sort_algorithm(int* array, int lo, int hi){
    while (lo < hi) { // Convert tail recursion into a loop
        int pivot = partition(array, lo, hi);

        // Always recurse on the smaller partition first
        if (pivot - lo < hi - pivot) {
            quick_sort_algorithm(array, lo, pivot);  // Recurse on left side
            lo = pivot + 1; // Continue loop for right side
        } else {
            quick_sort_algorithm(array, pivot + 1, hi);  // Recurse on right side
            hi = pivot; // Continue loop for left side
        }
    }
}

int partition(int* array, int lo, int hi){
    int pivot = array[lo]; 
    int i = lo - 1, j = hi + 1; 

    while(1){
        do{ i++; } while(array[i] < pivot);
        do{ j--; } while(array[j] > pivot);

        if (i >= j) return j; // Return partition index

        swap(array, i, j);
    } 
}

