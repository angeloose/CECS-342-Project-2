import Data.List 
import Data.Ord 

numbers :: [Double]
numbers = [645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25]

people :: [(String, Int)]
people = [("Hal", 20), ("Susann", 31), ("Dwight", 19), ("Kassandra", 21), 
          ("Lawrence", 25), ("Cindy", 22), ("Cory", 27), ("Mac", 19), ("Romana", 27), 
          ("Doretha", 32), ("Danna", 20), ("Zara", 23), ("Rosalyn", 26), ("Risa", 24), 
          ("Benny", 28), ("Juan", 33), ("Natalie", 25)]

-- generic sort function
generic :: (a -> a -> Ordering) -> [a] -> [a]
generic = sortBy


-- create specialized sort functions using
-- generic sort function for numbers, names and ages
sortNumbers :: [Double] -> [Double]
sortNumbers = generic compare

sortPeople :: [(String, Int)] -> [(String, Int)]
sortPeople = generic compare

sortAge :: [(String, Int)] -> [(String, Int)]
sortAge = generic (comparing (negate . snd) <> comparing fst)

-- comparing (negate . snd) sorts the negated ages
-- to achieve descending age order
-- if ages of two people are (EQ)
-- then compare fst using mappend operator
-- mappend operator combines the 2 comparisons


-- print sort results
genericSort = do

    let sortNums = sortNumbers numbers
    print sortNums

    let sortPeoples = sortPeople people
    print sortPeoples

    let sortedAge = sortAge people
    print sortedAge

