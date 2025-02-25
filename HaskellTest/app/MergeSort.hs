--merge sort in haskell

module MergeSort(
    merge,
    msort
) where

-- MERGE IMPLEMENTATION takes two sorted lists and returns a single merged sorted list. Base cases: when one list is empty, returns non empty list given in paramters. recursive case: recursively conpare first elements of two lists- if left element is smaller or equal, prepend that element to second list. ofherwise prepend second element to fitst list. continue until one list is empty 
merge :: Ord a => [a] -> [a] -> [a] 
-- base cases
merge [] right = right
merge left [] = left 
-- recursive case
merge (x:xs) (y:ys) = 
   if x <= y 
   then x : merge xs (y:ys)
   else y : merge (x:xs) ys


-- MERGESORT IMPLEMENTATION takes an unsorted list and recursivly partition subarrays until empty or single element list (base cases) returns sorted list. Partitions by calculating middle and assigning left and right subarrays. note: take and drop non destructive, will not change original list 
msort :: Ord a => [a] -> [a]
msort [] = [] --empty list base case
msort [x] = [x] --single element base case
msort xs = merge (msort left) (msort right) 
    where 
        middle = length xs `div` 2
        left = take middle xs
        right = drop middle xs
