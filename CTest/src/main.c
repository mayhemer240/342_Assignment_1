// main.c
//
// CECS 342 Assignment 1
// Sorting Algorithms in C & Haskell
//
// C Test Program

/* 
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

#include "quick_sort.h" 
#include "merge_sort.h" 

#include <stdlib.h>
#include <stdio.h>


char *name = "Malcolm Roddy"; // TODO: Update your full name.
int studentID = 30573684;  // TODO: Update your student ID.


static
void generatePseudoRandoms(int *a, int m, int seed, int n) {
  long int r = seed % (m*m);

  for (int i = 0; i < n; i++) {
    r = (r*r/m) % (m*m);
    a[i] = (int)r;
  }
}


static
int isSorted(const int *a, int n) {
  for (int i = 1; i < n; i++) {
    if (a[i] < a[i-1]) return 0;
  }

  return 1; // Sorted
}


static
int checkSum(int m, const int *a, int n) {
  long int sum = 0;
    
  for (long int i = 0; i < n; ++i) {
    sum += (i+2) * a[i];
    sum %= m;
  }

  return (int)sum;
}


static
void sort_test(const char *test_name, int i, void (*sort)(int*, int), int n) {
  int *const a = malloc(sizeof(int[n]));
  generatePseudoRandoms(a, 1E4, studentID, n);
  sort(a, n);
  char *result = isSorted(a, n) ? "passed" : "failed";
  int   cert   = checkSum(1E8, a, n);
  printf("%s test %d %s, certificate: %08d.\n", test_name, i, result, cert);
  free(a);
}


// Run test cases.
int main(void) {
  puts("CECS 342 Assignment 1");
  printf("Name: %s\n", name);
  printf("Student ID: %d\n", studentID);
  puts("Language: C");
  
  const char *qs = "Quick sort";
  sort_test(qs, 1, quick_sort, 0);
  sort_test(qs, 2, quick_sort, 1);
  sort_test(qs, 3, quick_sort, 2);
  sort_test(qs, 4, quick_sort, 1013);
  sort_test(qs, 5, quick_sort, 1E5);

  const char *ms = "Merge sort";
  sort_test(ms, 1, merge_sort, 0);
  sort_test(ms, 2, merge_sort, 1);
  sort_test(ms, 3, merge_sort, 2);
  sort_test(ms, 4, merge_sort, 1013);
  sort_test(ms, 5, merge_sort, 1E7);
}
