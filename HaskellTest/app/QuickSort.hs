--Tools
--Algorithm Refernece: https://www.youtube.com/watch?v=OKc2hAmMOY4&t=797s



module QuickSort(
    qsort
) where


qsort :: Ord a => [a] -> [a]
qsort [] = []
qsort (x:xs) = qsort smaller ++ [x] ++ qsort larger
    where
        smaller = filter(<=x) xs
        larger = filter(>x) xs



