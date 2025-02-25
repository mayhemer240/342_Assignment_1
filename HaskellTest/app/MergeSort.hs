module MergeSort (msort) where

-- MERGESORT IMPLEMENTATION
-- Takes an unsorted list and recursively partitions subarrays until empty or a single element list (base cases), then returns a sorted list.
-- Partitions by calculating the middle and assigning left and right subarrays.
-- Note: `take` and `drop` are non-destructive and do not modify the original list.
msort :: Ord a => [a] -> [a]
msort [] = []  -- empty list base case
msort [x] = [x]  -- single element base case
msort xs = merge (msort left) (msort right)  -- recursively sort and merge
  where
    middle = length xs `div` 2
    left = take middle xs
    right = drop middle xs
    -- MERGE Takes two sorted lists and merges them into one sorted list.
    merge [] right = right  -- base case: one list is empty
    merge left [] = left    -- base case: other list is empty
    merge (x:xs) (y:ys)
      | x <= y    = x : merge xs (y:ys)  -- recursive case: compare and prepend the smaller element
      | otherwise = y : merge (x:xs) ys
