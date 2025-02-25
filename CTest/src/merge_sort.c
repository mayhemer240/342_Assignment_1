/* 
    Merge Sort implmentation

    COLLABORATORS:
        Malcolm Roddy
    TOOLS
        Compiler(s):
            - GCC (Apple Clang 15.0.0)
        IDE(S):
            - Visual Studio Code
        Other:
            - Makefile for compilation
    SERVICES
        Merge Sort algorithm reference - https://en.wikipedia.org/wiki/Merge_sort
        Communication - discord.com
        Source control - Github.com
*/

#include "merge_sort.h"

#include <stdlib.h>
#include <stdio.h>


void merge_sort(int* array, int size){
    int* sorted_array = (int *)malloc(size * sizeof(int));
    if(sorted_array == NULL){
        fprintf(stderr, "Memory allocation failed!\n");
        return;
    }
    for(int i = 0; i < size; i++){ //copy elements
       sorted_array[i] = array[i];
    }
    divide(array, 0, size, sorted_array);   // sort data from B[] into A[]
    free(sorted_array);
}


static inline
void divide(int* B, int left, int right, int* A){
    //base case
    if (right - left <= 1)                     
        return;                                 

    int middle = (right + left) / 2;  

    // recursively sort both runs from array A[] into B[]
    divide(A, left,  middle, B);  // sort the left  run
    divide(A, middle, right, B);  // sort the right run
    conquer(B, left, middle, right, A); 
}


static inline
void conquer(int* B, int left, int middle, int right, int* A)
{
    int i = left, j = middle;
    
    // While there are elements in the left or right runs...
    for (int k = left; k < right; k++) {
        // If left run head exists and is <= existing right run head.
        if (i < middle && (j >= right || A[i] <= A[j])) {
            B[k] = A[i];
            i = i + 1;
        } else {
            B[k] = A[j];
            j = j + 1;
        }
    }
}











