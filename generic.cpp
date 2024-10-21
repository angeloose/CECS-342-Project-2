// Assignment 2 - Group 24
// CECS 342-02 Assignment 2
// 20 October 2024

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// person data structure containing name and age
struct Person 
{
    string name;
    int age;
};

// bool that compares two people names
bool sortByName(const Person& pers1, const Person& pers2) 
{
    return pers1.name < pers2.name;
}

// bool that compares two people's ages
bool compareAge(const Person& pers1, const Person& pers2) 
{
    // if the ages are the same, compares their names
    if (pers1.age == pers2.age) {
        return pers1.name < pers2.name; 
    }
    // else just compares the ages
    return pers1.age > pers2.age; 
}

// begin main
int main() 
{
    // vector to store numbers
    vector<double> numbers = {645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25};

    // vector to store people
    vector<Person> people = 
    {
        {"Hal", 20}, {"Susann", 31}, {"Dwight", 19}, {"Kassandra", 21}, {"Lawrence", 25}, {"Cindy", 22}, 
        {"Cory", 27}, {"Mac", 19}, {"Romana", 27}, {"Doretha", 32}, {"Danna", 20}, {"Zara", 23}, 
        {"Rosalyn", 26}, {"Risa", 24}, {"Benny", 28}, {"Juan", 33}, {"Natalie", 25}
    };

    // sorts numbers from least to greatest
    sort(numbers.begin(), numbers.end());

    cout << "The sorted numbers are:\n";
    for (int i = 0; i < numbers.size(); ++i)
    {
        cout << numbers[i] << endl;
    }

    // sorts people by name
    sort(people.begin(), people.end(), sortByName);

    cout << "\n\nPeople sorted by name:\n";
    for (int i = 0; i < people.size(); ++i)
    {
        cout << people[i].name << ", " << people[i].age << endl;
    }
    cout << endl;

    // sorts people by age in descending order
    sort(people.begin(), people.end(), compareAge);
    // prints people sorted by age, in descending order
    cout << "People sorted by age (descending):\n";
    for (int i = 0; i < people.size(); ++i)
    {
        cout << people[i].name << ", " << people[i].age << endl;
    }

    return 0;
}
