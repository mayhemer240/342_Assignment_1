// merge_sort.c
//
// CECS 342 Assignment 1
// Sorting Algorithms in C & Haskell
//
// merge sort program 
// Malcolm Roddy
// DUE DATE: 03/04/2025


/* 
    TOOLS USED:
        Visual Studio Code
        gcc - Apple clang version 15.0.0
        Makefile
        discord.com
        wikipedia: https://en.wikipedia.org/wiki/Merge_sort
         
*/

#include "merge_sort.h"
#include <stdlib.h>
#include <stdio.h>


void merge_sort(int* array, int size){
    int* B = (int *)malloc(size * sizeof(int));
    if(B == NULL){
        fprintf(stderr, "Memory allocation failed!\n");
        return;
    }
    for(int i = 0; i < size; i++){ //copy elements
       B[i] = array[i];
    }
    split(array, 0, size, B);   // sort data from B[] into A[]
    free(B);
}


void split(int B[], int left, int right, int A[]){
    //base case
    if (right - left <= 1)                     
        return;                                 

    int middle = (right + left) / 2;              // calcualate mid point 

    // recursively sort both runs from array A[] into B[]
    split(A, left,  middle, B);  // sort the left  run
    split(A, middle, right, B);  // sort the right run
    merge(B, left, middle, right, A); 
}


void merge(int B[], int left, int middle, int right, int A[])
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











