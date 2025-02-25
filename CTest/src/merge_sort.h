#pragma once



/**
 * @brief Wrapper for merge sort
 *
 * This function allocates a temporary array, copies the input array into it, 
 * and then calls divide function with initial arguments for recursive calls
 *
 * @input - array[]: The array to be sorted - size: The number of elements in the array.
 * @output- array[]: The sorted array, modified in place.
 */
void merge_sort(int*, int);


/**
 * @brief Recursively divides the array into two halves and merges them back.
 *
 * This function recursively splits the array into two halves until single-element 
 * subarrays are reached. It then merges the sorted halves back together.
 *
 * @input
 * - A[]: The original array to be sorted.
 * - left: The starting index of the current segment (inclusive).
 * - right: The ending index of the current segment (exclusive).
 *
 * @output
 * - B[]: The temporary array used to store merged sorted elements.
 */
static inline
void divide(int*, int, int, int*);


/**
 * @brief Merges two sorted subarrays into a single sorted segment.
 *
 * This function merges two sorted subarrays from A[] into B[]. The left subarray
 * spans indices [left, middle) and the right subarray spans [middle, right).
 * The merged result is stored in B[] within the range [left, right).
 *
 * @input
 * - A[]: The original array containing two sorted subarrays.
 * - left: The starting index of the left subarray (inclusive).
 * - middle: The starting index of the right subarray (exclusive).
 * - right: The ending index of the right subarray (exclusive).
 * - B[]: The output array where the merged and sorted elements are stored.
 * @output
 * - None
 */
static inline
void conquer(int*, int, int, int, int*);

