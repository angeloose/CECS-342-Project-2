// Reichen Brown
// Assignment 2 - Group 24
// CECS 342-02 Assignment 2
// 20 October 2024
// Tools Used: Visual Studio Code, Discord, GitHub, C, C#, C++, Python, Haskell, .NET, W3Schools.com, GeeksForGeeks.org, tutorialspoint.com, ChatGPT

//includes
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;

class Program {
    struct Person
    {
        public string Name; 
        public int Age;    

        //Constructor
        public Person(string name, int age)
        {
            Name = name;
            Age = age;
        }
    }
    static void Main() {
        //Prompt Variables
        float[] numbers = [645.41f, 37.59f, 76.41f, 5.31f, -34.23f, 1.11f, 1.10f, 23.46f, 635.47f, -876.32f, 467.83f, 62.25f];
        Person[] people = new Person[] {
            new Person("Hal", 20),
            new Person("Susann", 31),
            new Person("Dwight", 19),
            new Person("Kassandra", 21),
            new Person("Lawrence", 25),
            new Person("Cindy", 22),
            new Person("Cory", 27),
            new Person("Mac", 19),
            new Person("Romana", 27),
            new Person("Doretha", 32),
            new Person("Danna", 20),
            new Person("Zara", 23),
            new Person("Rosalyn", 26),
            new Person("Risa", 24),
            new Person("Benny", 28),
            new Person("Juan", 33),
            new Person("Natalie", 25)
        };

        //Numbers Sotring Test
        Console.WriteLine("\n----------C# Numbers Sorting Test----------");
        Console.WriteLine("\n-----Pre-Sorted List:-----");
        foreach (float num in numbers)
            Console.WriteLine($"{num}");

        IEnumerable<float> sortedNums = 
                from number in numbers
                orderby number ascending
                select number;
        
        Console.WriteLine("\n-----Sorted List:-----");
        foreach (float num in sortedNums)
            Console.WriteLine($"{num}");


        //Alphabetical Sorting Test
        Console.WriteLine("\n----------C# Alphabetical Sorting Test----------");
        Console.WriteLine("\nPre-Sorted List:");
        foreach (Person person in people)
            Console.WriteLine($"{person.Name}, {person.Age}");
        
        IEnumerable<Person> sortedPeeps = 
                from person in people
                orderby person.Name
                select person;
        Console.WriteLine("\n-----Sorted List:-----");
        foreach (Person person in sortedPeeps)
            Console.WriteLine($"{person.Name}, {person.Age}");


        //Age Sorting Test
        Console.WriteLine("\n----------C# Age Sorting Test----------");
        Console.WriteLine("\n-----Pre-Sorted List:-----");
        foreach (Person person in people)
            Console.WriteLine($"{person.Name}, {person.Age}");
        
        IEnumerable<Person> sortedPeepsAge = 
                from person in people
                orderby person.Age descending, person.Name ascending //sorts by name then age
                select person;
        Console.WriteLine("\n-----Sorted List:-----");
        foreach (Person person in sortedPeepsAge)
            Console.WriteLine($"{person.Name}, {person.Age}");
    }
}
