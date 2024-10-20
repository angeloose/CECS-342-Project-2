# Assignment 2 - Group 24
# CECS 342-02 Assignment 2
# 20 October 2024

# list of numbers, unsorted
numbers = [645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25]

# list of people, unsorted
people = [
    ("Hal", 20), ("Susann", 31), ("Dwight", 19), ("Kassandra", 21), 
    ("Lawrence", 25), ("Cindy", 22), ("Cory", 27), ("Mac", 19), 
    ("Romana", 27), ("Doretha", 32), ("Danna", 20), ("Zara", 23),
    ("Rosalyn", 26), ("Risa", 24), ("Benny", 28), ("Juan", 33), 
    ("Natalie", 25)
]

# begin main
def main():
    # sorts numbers from least to greatest
    sortedNumbers = sorted(numbers)
    # sorts people based on name
    sortedPersonName = sorted(people, key= lambda person: person[0])
    # sorts people based on their age in decending order
    sortedPersonAge = sorted(people, key= lambda person: (-person[1], person[0]))

    # prints the base, unsorted numbers
    print("The unsorted numbers are:")
    for num in numbers:
        print(num)
    
    # sorts numbers from greatest to least
    print("\nThe sorted numbers are:")
    for sNum in sortedNumbers:
        print(sNum)
    
    # prints the base, unstorted people
    print("\n\nThe unsorted people are:")
    for person in people:
        print(person)

    # prints people sorted by name
    print("\nSorted people by name:")
    for person in sortedPersonName:
        print(person)
    
    # prints people sorted by age, in descending order
    print("\nSorted people by age (descending):")
    for person in sortedPersonAge:
        print(person)

# call main function
main()
