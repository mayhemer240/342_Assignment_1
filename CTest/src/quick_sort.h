#pragma once

/*  Wrapper function that calls quick sort 
    alogrithm with default values.  

    input: unsorted array, size
    output: none */
void quick_sort(int*, int);


/*  Sorts (a portion of) an array, divides it into partitions, then sorts those

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
void swap(int*, int, int);

