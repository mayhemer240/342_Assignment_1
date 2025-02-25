#pragma once
// hoages algorithm
/*
    Traverses from left to right, finding index with element greater
    than pivot, then traverse right to left, finding index with           smaller element
    if indices overlap, return right index as new partition index
    otherwise, swap elements at i and j, and continue
*/


/*  Wrapper function that calls quick sort 
    alogrithm with default values.  

    input: unsorted array, size
    output: none */
void quick_sort(int*, int);


/*  Sorts (a portion of) an array, divides it into partitions, then sorts those
    algorithm quicksort(A, lo, hi) is 

    input: unsorted array, low index, high index
    output: none    */
void quick_sort_algorithm(int*, int, int);


/* Divides array into two partitions
    input: unsorted array, left index, right index
    output: new pivot value
    */
int partition(int*, int, int);


// Swap the elements at the left and right indices
static inline
void swap(int* array, int i, int j){
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

